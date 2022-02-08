// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREIODELETEONEXIT_H
#define LIBCOREIODELETEONEXIT_H



#import "JavaLangThread.h"
#import "JavaUtilArrayList.h"

@interface LibcoreIoDeleteOnExit : JavaLangThread {
    JavaUtilArrayList *files_;
}




-(id)init;
-(void)addFileWithNSString:(id)arg0 ;
-(void)run;
-(void)dealloc;
+(id)getInstance;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif