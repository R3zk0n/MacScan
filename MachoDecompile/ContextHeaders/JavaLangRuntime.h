// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGRUNTIME_H
#define JAVALANGRUNTIME_H


#import <Foundation/Foundation.h>

#import "JavaUtilList-Protocol.h"

@interface JavaLangRuntime : NSObject {
    id<JavaUtilList> *shutdownHooks_;
}




-(id)init;
-(int)availableProcessors;
-(void)exitWithInt:(int)arg0 ;
-(void)haltWithInt:(int)arg0 ;
-(void)gc;
-(NSInteger)maxMemory;
-(NSInteger)totalMemory;
-(NSInteger)freeMemory;
-(void)addShutdownHookWithJavaLangThread:(id)arg0 ;
-(BOOL)removeShutdownHookWithJavaLangThread:(id)arg0 ;
-(void)runShutdownHooks;
-(void)registerShutdownHooks;
-(void)load__WithNSString:(id)arg0 ;
-(void)loadLibraryWithNSString:(id)arg0 ;
-(void)runFinalization;
-(void)traceInstructionsWithBoolean:(BOOL)arg0 ;
-(void)traceMethodCallsWithBoolean:(BOOL)arg0 ;
-(void)dealloc;
+(id)getRuntime;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif