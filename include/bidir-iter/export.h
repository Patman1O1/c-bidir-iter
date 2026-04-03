#ifndef EXPORT_H
#define EXPORT_H

#ifdef __cplusplus
extern "C" {
#endif // #ifdef __cplusplus

#ifndef BIDIR_ITER_STATIC_DEFINE
#  include <bidir-iter/export_shared.h>
#else
#  include <bidir-iter/export_static.h>
#endif // #ifndef BIDIR_ITER_STATIC_DEFINE

#ifdef __cplusplus
}
#endif // #ifdef __cplusplus

#endif // #ifndef EXPORT_H

