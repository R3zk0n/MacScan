// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILOBJECTS_H
#define JAVAUTILOBJECTS_H


#import <Foundation/Foundation.h>


@interface JavaUtilObjects : NSObject



-(id)init;
+(int)compareWithId:(id)arg0 withId:(id)arg1 withJavaUtilComparator:(id)arg2 ;
+(BOOL)deepEqualsWithId:(id)arg0 withId:(id)arg1 ;
+(BOOL)equalsWithId:(id)arg0 withId:(id)arg1 ;
+(int)hash__WithNSObjectArray:(id)arg0 ;
+(int)hashCodeWithId:(id)arg0 ;
+(id)requireNonNullWithId:(id)arg0 ;
+(id)requireNonNullWithId:(id)arg0 withNSString:(id)arg1 ;
+(id)toStringWithId:(id)arg0 ;
+(id)toStringWithId:(id)arg0 withNSString:(id)arg1 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif