#ifndef _KPM_COMPAT_H
#define _KPM_COMPAT_H

#include <linux/uaccess.h>

/* access_ok() changed from 3 args to 2 args in kernel 5.0 */
#if LINUX_VERSION_CODE < KERNEL_VERSION(5, 0, 0)
#define ksu_access_ok(addr, size) access_ok(VERIFY_READ, (addr), (size))
#else
#define ksu_access_ok(addr, size) access_ok((addr), (size))
#endif

#endif /* _KPM_COMPAT_H */
