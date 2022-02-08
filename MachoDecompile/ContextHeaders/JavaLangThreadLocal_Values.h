// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGTHREADLOCAL_VALUES_H
#define JAVALANGTHREADLOCAL_VALUES_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"

@interface JavaLangThreadLocal_Values : NSObject {
    IOSObjectArray *table_;
    int mask_;
    int size_;
    int tombstones_;
    int maximumLoad_;
    int clean_;
}




-(id)init;
-(id)initWithJavaLangThreadLocal_Values:(id)arg0 ;
-(void)inheritValuesWithJavaLangThreadLocal_Values:(id)arg0 ;
-(void)initializeTableWithInt:(int)arg0 ;
-(void)cleanUp;
-(BOOL)rehash;
-(void)addWithJavaLangThreadLocal:(id)arg0 withId:(id)arg1 ;
-(void)putWithJavaLangThreadLocal:(id)arg0 withId:(id)arg1 ;
-(id)getAfterMissWithJavaLangThreadLocal:(id)arg0 ;
-(void)removeWithJavaLangThreadLocal:(id)arg0 ;
-(int)nextWithInt:(int)arg0 ;
-(void)dealloc;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif