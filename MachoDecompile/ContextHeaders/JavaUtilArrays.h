// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILARRAYS_H
#define JAVAUTILARRAYS_H


#import <Foundation/Foundation.h>


@interface JavaUtilArrays : NSObject



-(id)init;
+(id)asListWithNSObjectArray:(id)arg0 ;
+(int)binarySearchWithByteArray:(id)arg0 withByte:(char)arg1 ;
+(int)binarySearchWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withByte:(char)arg3 ;
+(int)binarySearchWithCharArray:(id)arg0 withChar:(unsigned short)arg1 ;
+(int)binarySearchWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withChar:(unsigned short)arg3 ;
+(int)binarySearchWithDoubleArray:(id)arg0 withDouble:(CGFloat)arg1 ;
+(int)binarySearchWithDoubleArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withDouble:(CGFloat)arg3 ;
+(int)binarySearchWithFloatArray:(id)arg0 withFloat:(float)arg1 ;
+(int)binarySearchWithFloatArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withFloat:(float)arg3 ;
+(int)binarySearchWithIntArray:(id)arg0 withInt:(int)arg1 ;
+(int)binarySearchWithIntArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(int)binarySearchWithLongArray:(id)arg0 withLong:(NSInteger)arg1 ;
+(int)binarySearchWithLongArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withLong:(NSInteger)arg3 ;
+(int)binarySearchWithNSObjectArray:(id)arg0 withId:(id)arg1 ;
+(int)binarySearchWithNSObjectArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withId:(id)arg3 ;
+(int)binarySearchWithNSObjectArray:(id)arg0 withId:(id)arg1 withJavaUtilComparator:(id)arg2 ;
+(int)binarySearchWithNSObjectArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withId:(id)arg3 withJavaUtilComparator:(id)arg4 ;
+(int)binarySearchWithShortArray:(id)arg0 withShort:(short)arg1 ;
+(int)binarySearchWithShortArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withShort:(short)arg3 ;
+(void)checkBinarySearchBoundsWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(void)fillWithByteArray:(id)arg0 withByte:(char)arg1 ;
+(void)fillWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withByte:(char)arg3 ;
+(void)fillWithShortArray:(id)arg0 withShort:(short)arg1 ;
+(void)fillWithShortArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withShort:(short)arg3 ;
+(void)fillWithCharArray:(id)arg0 withChar:(unsigned short)arg1 ;
+(void)fillWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withChar:(unsigned short)arg3 ;
+(void)fillWithIntArray:(id)arg0 withInt:(int)arg1 ;
+(void)fillWithIntArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(void)fillWithLongArray:(id)arg0 withLong:(NSInteger)arg1 ;
+(void)fillWithLongArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withLong:(NSInteger)arg3 ;
+(void)fillWithFloatArray:(id)arg0 withFloat:(float)arg1 ;
+(void)fillWithFloatArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withFloat:(float)arg3 ;
+(void)fillWithDoubleArray:(id)arg0 withDouble:(CGFloat)arg1 ;
+(void)fillWithDoubleArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withDouble:(CGFloat)arg3 ;
+(void)fillWithBooleanArray:(id)arg0 withBoolean:(BOOL)arg1 ;
+(void)fillWithBooleanArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withBoolean:(BOOL)arg3 ;
+(void)fillWithNSObjectArray:(id)arg0 withId:(id)arg1 ;
+(void)fillWithNSObjectArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withId:(id)arg3 ;
+(int)hashCodeWithBooleanArray:(id)arg0 ;
+(int)hashCodeWithIntArray:(id)arg0 ;
+(int)hashCodeWithShortArray:(id)arg0 ;
+(int)hashCodeWithCharArray:(id)arg0 ;
+(int)hashCodeWithByteArray:(id)arg0 ;
+(int)hashCodeWithLongArray:(id)arg0 ;
+(int)hashCodeWithFloatArray:(id)arg0 ;
+(int)hashCodeWithDoubleArray:(id)arg0 ;
+(int)hashCodeWithNSObjectArray:(id)arg0 ;
+(int)deepHashCodeWithNSObjectArray:(id)arg0 ;
+(int)deepHashCodeElementWithId:(id)arg0 ;
+(BOOL)equalsWithByteArray:(id)arg0 withByteArray:(id)arg1 ;
+(BOOL)equalsWithShortArray:(id)arg0 withShortArray:(id)arg1 ;
+(BOOL)equalsWithCharArray:(id)arg0 withCharArray:(id)arg1 ;
+(BOOL)equalsWithIntArray:(id)arg0 withIntArray:(id)arg1 ;
+(BOOL)equalsWithLongArray:(id)arg0 withLongArray:(id)arg1 ;
+(BOOL)equalsWithFloatArray:(id)arg0 withFloatArray:(id)arg1 ;
+(BOOL)equalsWithDoubleArray:(id)arg0 withDoubleArray:(id)arg1 ;
+(BOOL)equalsWithBooleanArray:(id)arg0 withBooleanArray:(id)arg1 ;
+(BOOL)equalsWithNSObjectArray:(id)arg0 withNSObjectArray:(id)arg1 ;
+(BOOL)deepEqualsWithNSObjectArray:(id)arg0 withNSObjectArray:(id)arg1 ;
+(BOOL)deepEqualsElementsWithId:(id)arg0 withId:(id)arg1 ;
+(void)sortWithByteArray:(id)arg0 ;
+(void)sortWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(void)checkOffsetAndCountWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(void)checkStartAndEndWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(void)sortWithCharArray:(id)arg0 ;
+(void)sortWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(void)sortWithDoubleArray:(id)arg0 ;
+(void)sortWithDoubleArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(void)sortWithFloatArray:(id)arg0 ;
+(void)sortWithFloatArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(void)sortWithIntArray:(id)arg0 ;
+(void)sortWithIntArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(void)sortWithLongArray:(id)arg0 ;
+(void)sortWithLongArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(void)sortWithShortArray:(id)arg0 ;
+(void)sortWithShortArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(void)sortWithNSObjectArray:(id)arg0 ;
+(void)sortWithNSObjectArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(void)sortWithNSObjectArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withJavaUtilComparator:(id)arg3 ;
+(void)sortWithNSObjectArray:(id)arg0 withJavaUtilComparator:(id)arg1 ;
+(id)toStringWithBooleanArray:(id)arg0 ;
+(id)toStringWithByteArray:(id)arg0 ;
+(id)toStringWithCharArray:(id)arg0 ;
+(id)toStringWithDoubleArray:(id)arg0 ;
+(id)toStringWithFloatArray:(id)arg0 ;
+(id)toStringWithIntArray:(id)arg0 ;
+(id)toStringWithLongArray:(id)arg0 ;
+(id)toStringWithShortArray:(id)arg0 ;
+(id)toStringWithNSObjectArray:(id)arg0 ;
+(id)deepToStringWithNSObjectArray:(id)arg0 ;
+(void)deepToStringImplWithNSObjectArray:(id)arg0 withNSObjectArray:(id)arg1 withJavaLangStringBuilder:(id)arg2 ;
+(BOOL)deepToStringImplContainsWithNSObjectArray:(id)arg0 withId:(id)arg1 ;
+(id)copyOfWithBooleanArray:(id)arg0 withInt:(int)arg1 ;
+(id)copyOfWithByteArray:(id)arg0 withInt:(int)arg1 ;
+(id)copyOfWithCharArray:(id)arg0 withInt:(int)arg1 ;
+(id)copyOfWithDoubleArray:(id)arg0 withInt:(int)arg1 ;
+(id)copyOfWithFloatArray:(id)arg0 withInt:(int)arg1 ;
+(id)copyOfWithIntArray:(id)arg0 withInt:(int)arg1 ;
+(id)copyOfWithLongArray:(id)arg0 withInt:(int)arg1 ;
+(id)copyOfWithShortArray:(id)arg0 withInt:(int)arg1 ;
+(id)copyOfWithNSObjectArray:(id)arg0 withInt:(int)arg1 ;
+(id)copyOfWithNSObjectArray:(id)arg0 withInt:(int)arg1 withIOSClass:(id)arg2 ;
+(id)copyOfRangeWithBooleanArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(id)copyOfRangeWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(id)copyOfRangeWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(id)copyOfRangeWithDoubleArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(id)copyOfRangeWithFloatArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(id)copyOfRangeWithIntArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(id)copyOfRangeWithLongArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(id)copyOfRangeWithShortArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(id)copyOfRangeWithNSObjectArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(id)copyOfRangeWithNSObjectArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withIOSClass:(id)arg3 ;
+(id)__annotations_asListWithNSObjectArray_;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif