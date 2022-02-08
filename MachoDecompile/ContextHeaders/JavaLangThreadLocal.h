// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGTHREADLOCAL_H
#define JAVALANGTHREADLOCAL_H


#import <Foundation/Foundation.h>

#import "JavaLangRefReference.h"

@interface JavaLangThreadLocal : NSObject {
    JavaLangRefReference *reference_;
    int hash__;
}




-(id)init;
-(id)get;
-(id)initialValue;
-(void)setWithId:(id)arg0 ;
-(void)remove;
-(id)initializeValuesWithJavaLangThread:(id)arg0 ;
-(id)valuesWithJavaLangThread:(id)arg0 ;
-(void)dealloc;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif