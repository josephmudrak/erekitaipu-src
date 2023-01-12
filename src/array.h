#define ARRAY_SIZE(arr)		(sizeof(arr) / sizeof((arr)[0]) + mustBeArray(arr))
#define isArray(arr)		(!isSameType((arr), &(arr)[0]))
#define isSameType(a, b)	__builtin_types_compatible_p(typeof(a), typeof(b))
#define mustBe(e)			(0 * (int) sizeof(struct{static_assert(e); char ISO_C_forbids_a_struct_with_no_members__;}))

#define mustBeArray(arr)	(mustBe(isArray(arr)))