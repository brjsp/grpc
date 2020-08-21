/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/string.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_TYPE_MATCHER_STRING_PROTO_UPB_H_
#define ENVOY_TYPE_MATCHER_STRING_PROTO_UPB_H_

#include "upb/msg.h"
#include "upb/decode.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_type_matcher_StringMatcher;
struct envoy_type_matcher_ListStringMatcher;
typedef struct envoy_type_matcher_StringMatcher envoy_type_matcher_StringMatcher;
typedef struct envoy_type_matcher_ListStringMatcher envoy_type_matcher_ListStringMatcher;
extern const upb_msglayout envoy_type_matcher_StringMatcher_msginit;
extern const upb_msglayout envoy_type_matcher_ListStringMatcher_msginit;
struct envoy_type_matcher_RegexMatcher;
extern const upb_msglayout envoy_type_matcher_RegexMatcher_msginit;


/* envoy.type.matcher.StringMatcher */

UPB_INLINE envoy_type_matcher_StringMatcher *envoy_type_matcher_StringMatcher_new(upb_arena *arena) {
  return (envoy_type_matcher_StringMatcher *)_upb_msg_new(&envoy_type_matcher_StringMatcher_msginit, arena);
}
UPB_INLINE envoy_type_matcher_StringMatcher *envoy_type_matcher_StringMatcher_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_type_matcher_StringMatcher *ret = envoy_type_matcher_StringMatcher_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_type_matcher_StringMatcher_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_type_matcher_StringMatcher_serialize(const envoy_type_matcher_StringMatcher *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_type_matcher_StringMatcher_msginit, arena, len);
}

typedef enum {
  envoy_type_matcher_StringMatcher_match_pattern_exact = 1,
  envoy_type_matcher_StringMatcher_match_pattern_prefix = 2,
  envoy_type_matcher_StringMatcher_match_pattern_suffix = 3,
  envoy_type_matcher_StringMatcher_match_pattern_regex = 4,
  envoy_type_matcher_StringMatcher_match_pattern_safe_regex = 5,
  envoy_type_matcher_StringMatcher_match_pattern_NOT_SET = 0
} envoy_type_matcher_StringMatcher_match_pattern_oneofcases;
UPB_INLINE envoy_type_matcher_StringMatcher_match_pattern_oneofcases envoy_type_matcher_StringMatcher_match_pattern_case(const envoy_type_matcher_StringMatcher* msg) { return (envoy_type_matcher_StringMatcher_match_pattern_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(12, 24), int32_t); }

UPB_INLINE bool envoy_type_matcher_StringMatcher_has_exact(const envoy_type_matcher_StringMatcher *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 24)) == 1; }
UPB_INLINE upb_strview envoy_type_matcher_StringMatcher_exact(const envoy_type_matcher_StringMatcher *msg) { return UPB_READ_ONEOF(msg, upb_strview, UPB_SIZE(4, 8), UPB_SIZE(12, 24), 1, upb_strview_make("", strlen(""))); }
UPB_INLINE bool envoy_type_matcher_StringMatcher_has_prefix(const envoy_type_matcher_StringMatcher *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 24)) == 2; }
UPB_INLINE upb_strview envoy_type_matcher_StringMatcher_prefix(const envoy_type_matcher_StringMatcher *msg) { return UPB_READ_ONEOF(msg, upb_strview, UPB_SIZE(4, 8), UPB_SIZE(12, 24), 2, upb_strview_make("", strlen(""))); }
UPB_INLINE bool envoy_type_matcher_StringMatcher_has_suffix(const envoy_type_matcher_StringMatcher *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 24)) == 3; }
UPB_INLINE upb_strview envoy_type_matcher_StringMatcher_suffix(const envoy_type_matcher_StringMatcher *msg) { return UPB_READ_ONEOF(msg, upb_strview, UPB_SIZE(4, 8), UPB_SIZE(12, 24), 3, upb_strview_make("", strlen(""))); }
UPB_INLINE bool envoy_type_matcher_StringMatcher_has_regex(const envoy_type_matcher_StringMatcher *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 24)) == 4; }
UPB_INLINE upb_strview envoy_type_matcher_StringMatcher_regex(const envoy_type_matcher_StringMatcher *msg) { return UPB_READ_ONEOF(msg, upb_strview, UPB_SIZE(4, 8), UPB_SIZE(12, 24), 4, upb_strview_make("", strlen(""))); }
UPB_INLINE bool envoy_type_matcher_StringMatcher_has_safe_regex(const envoy_type_matcher_StringMatcher *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 24)) == 5; }
UPB_INLINE const struct envoy_type_matcher_RegexMatcher* envoy_type_matcher_StringMatcher_safe_regex(const envoy_type_matcher_StringMatcher *msg) { return UPB_READ_ONEOF(msg, const struct envoy_type_matcher_RegexMatcher*, UPB_SIZE(4, 8), UPB_SIZE(12, 24), 5, NULL); }
UPB_INLINE bool envoy_type_matcher_StringMatcher_ignore_case(const envoy_type_matcher_StringMatcher *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), bool); }

UPB_INLINE void envoy_type_matcher_StringMatcher_set_exact(envoy_type_matcher_StringMatcher *msg, upb_strview value) {
  UPB_WRITE_ONEOF(msg, upb_strview, UPB_SIZE(4, 8), value, UPB_SIZE(12, 24), 1);
}
UPB_INLINE void envoy_type_matcher_StringMatcher_set_prefix(envoy_type_matcher_StringMatcher *msg, upb_strview value) {
  UPB_WRITE_ONEOF(msg, upb_strview, UPB_SIZE(4, 8), value, UPB_SIZE(12, 24), 2);
}
UPB_INLINE void envoy_type_matcher_StringMatcher_set_suffix(envoy_type_matcher_StringMatcher *msg, upb_strview value) {
  UPB_WRITE_ONEOF(msg, upb_strview, UPB_SIZE(4, 8), value, UPB_SIZE(12, 24), 3);
}
UPB_INLINE void envoy_type_matcher_StringMatcher_set_regex(envoy_type_matcher_StringMatcher *msg, upb_strview value) {
  UPB_WRITE_ONEOF(msg, upb_strview, UPB_SIZE(4, 8), value, UPB_SIZE(12, 24), 4);
}
UPB_INLINE void envoy_type_matcher_StringMatcher_set_safe_regex(envoy_type_matcher_StringMatcher *msg, struct envoy_type_matcher_RegexMatcher* value) {
  UPB_WRITE_ONEOF(msg, struct envoy_type_matcher_RegexMatcher*, UPB_SIZE(4, 8), value, UPB_SIZE(12, 24), 5);
}
UPB_INLINE struct envoy_type_matcher_RegexMatcher* envoy_type_matcher_StringMatcher_mutable_safe_regex(envoy_type_matcher_StringMatcher *msg, upb_arena *arena) {
  struct envoy_type_matcher_RegexMatcher* sub = (struct envoy_type_matcher_RegexMatcher*)envoy_type_matcher_StringMatcher_safe_regex(msg);
  if (sub == NULL) {
    sub = (struct envoy_type_matcher_RegexMatcher*)_upb_msg_new(&envoy_type_matcher_RegexMatcher_msginit, arena);
    if (!sub) return NULL;
    envoy_type_matcher_StringMatcher_set_safe_regex(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_type_matcher_StringMatcher_set_ignore_case(envoy_type_matcher_StringMatcher *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), bool) = value;
}

/* envoy.type.matcher.ListStringMatcher */

UPB_INLINE envoy_type_matcher_ListStringMatcher *envoy_type_matcher_ListStringMatcher_new(upb_arena *arena) {
  return (envoy_type_matcher_ListStringMatcher *)_upb_msg_new(&envoy_type_matcher_ListStringMatcher_msginit, arena);
}
UPB_INLINE envoy_type_matcher_ListStringMatcher *envoy_type_matcher_ListStringMatcher_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_type_matcher_ListStringMatcher *ret = envoy_type_matcher_ListStringMatcher_new(arena);
  return (ret && upb_decode(buf, size, ret, &envoy_type_matcher_ListStringMatcher_msginit, arena)) ? ret : NULL;
}
UPB_INLINE char *envoy_type_matcher_ListStringMatcher_serialize(const envoy_type_matcher_ListStringMatcher *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_type_matcher_ListStringMatcher_msginit, arena, len);
}

UPB_INLINE bool envoy_type_matcher_ListStringMatcher_has_patterns(const envoy_type_matcher_ListStringMatcher *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0)); }
UPB_INLINE const envoy_type_matcher_StringMatcher* const* envoy_type_matcher_ListStringMatcher_patterns(const envoy_type_matcher_ListStringMatcher *msg, size_t *len) { return (const envoy_type_matcher_StringMatcher* const*)_upb_array_accessor(msg, UPB_SIZE(0, 0), len); }

UPB_INLINE envoy_type_matcher_StringMatcher** envoy_type_matcher_ListStringMatcher_mutable_patterns(envoy_type_matcher_ListStringMatcher *msg, size_t *len) {
  return (envoy_type_matcher_StringMatcher**)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0), len);
}
UPB_INLINE envoy_type_matcher_StringMatcher** envoy_type_matcher_ListStringMatcher_resize_patterns(envoy_type_matcher_ListStringMatcher *msg, size_t len, upb_arena *arena) {
  return (envoy_type_matcher_StringMatcher**)_upb_array_resize_accessor(msg, UPB_SIZE(0, 0), len, UPB_TYPE_MESSAGE, arena);
}
UPB_INLINE struct envoy_type_matcher_StringMatcher* envoy_type_matcher_ListStringMatcher_add_patterns(envoy_type_matcher_ListStringMatcher *msg, upb_arena *arena) {
  struct envoy_type_matcher_StringMatcher* sub = (struct envoy_type_matcher_StringMatcher*)_upb_msg_new(&envoy_type_matcher_StringMatcher_msginit, arena);
  bool ok = _upb_array_append_accessor(
      msg, UPB_SIZE(0, 0), UPB_SIZE(4, 8), UPB_TYPE_MESSAGE, &sub, arena);
  if (!ok) return NULL;
  return sub;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_TYPE_MATCHER_STRING_PROTO_UPB_H_ */