// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGREFREFERENCEQUEUE_H
#define JAVALANGREFREFERENCEQUEUE_H


#import <Foundation/Foundation.h>

#import "JavaLangRefReference.h"

@interface JavaLangRefReferenceQueue : NSObject {
    JavaLangRefReference *head_;
    JavaLangRefReference *SENTINEL_;
}




-(id)init;
-(id)poll;
-(id)remove;
-(id)removeWithLong:(NSInteger)arg0 ;
-(void)enqueueWithJavaLangRefReference:(id)arg0 ;
-(void)dealloc;
+(void)addWithJavaLangRefReference:(id)arg0 ;
+(void)initialize;


@end


#endif