// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAIOOUTPUTSTREAM_H
#define JAVAIOOUTPUTSTREAM_H


#import <Foundation/Foundation.h>

#import "JavaIoCloseable-Protocol.h"
#import "JavaIoFlushable-Protocol.h"

@interface JavaIoOutputStream : NSObject <JavaIoCloseable, JavaIoFlushable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)close;
-(void)flush;
-(void)writeWithByteArray:(id)arg0 ;
-(void)writeWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)writeWithInt:(int)arg0 ;
-(BOOL)checkError;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif