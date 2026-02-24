#define __KERNEL__ 
#define MODULE

#include <linux/modversions.h>
#include <linux/module.h>
#include <linux/kprobes.h> 

MODULE_AUTHOR("Claudia Varnas");
MODULE_DESCRIPTION("");
MODULE_LICENSE("GPL");

/* Define a kretprobe struct for initialization purposes */
static struct kretprobe oom_probe = {
	.handler = ret_handler,
	.entry_handler = entry_handler,
	.maxactive = 5, /* 5 instances of kprobe at a time, probably overkill. */
};

static int __init kretprobe_init(void)
{
	int ret;
	oom_probe.kp.symbol_name = out_of_memory;
	ret = register_kretprobe(&oom_probe);
	
	/* Should probably delete before handing in challenge */
	if (ret < 0){
		pr_err("kretprobe register failed as %d\n",ret);
		return ret;
	}

	/* Success. */
	pr_info("probe at %s: %p\n", oom_probe.kp.symbol_name, oom_probe.kp.addr);
	return 0;

	
}

static void __exit kretprobe_exit(void)
{
	unregister_kretprobe(&oom_probe);
}

module_init(kretprobe_init);
module_exit(kretprobe_exit);


