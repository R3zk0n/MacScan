// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAIOINPUTSTREAM_H
#define JAVAIOINPUTSTREAM_H


#import <Foundation/Foundation.h>

#import "JavaIoCloseable-Protocol.h"

@interface JavaIoInputStream : NSObject <JavaIoCloseable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(int)available;
-(void)close;
-(void)markWithInt:(int)arg0 ;
-(BOOL)markSupported;
-(int)read;
-(int)readWithByteArray:(id)arg0 ;
-(int)readWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)reset;
-(NSInteger)skipWithLong:(NSInteger)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif