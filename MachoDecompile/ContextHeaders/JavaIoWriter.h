// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAIOWRITER_H
#define JAVAIOWRITER_H


#import <Foundation/Foundation.h>

#import "JavaLangAppendable-Protocol.h"
#import "JavaIoCloseable-Protocol.h"
#import "JavaIoFlushable-Protocol.h"

@interface JavaIoWriter : NSObject <JavaLangAppendable, JavaIoCloseable, JavaIoFlushable>

 {
    id *lock_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithId:(id)arg0 ;
-(void)close;
-(void)flush;
-(void)writeWithCharArray:(id)arg0 ;
-(void)writeWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)writeWithInt:(int)arg0 ;
-(void)writeWithNSString:(id)arg0 ;
-(void)writeWithNSString:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)appendWithChar:(unsigned short)arg0 ;
-(id)appendWithJavaLangCharSequence:(id)arg0 ;
-(id)appendWithJavaLangCharSequence:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(BOOL)checkError;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif