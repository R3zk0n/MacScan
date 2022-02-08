// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAIOREADER_H
#define JAVAIOREADER_H


#import <Foundation/Foundation.h>

#import "JavaLangReadable-Protocol.h"
#import "JavaIoCloseable-Protocol.h"

@interface JavaIoReader : NSObject <JavaLangReadable, JavaIoCloseable>

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
-(void)markWithInt:(int)arg0 ;
-(BOOL)markSupported;
-(int)read;
-(int)readWithCharArray:(id)arg0 ;
-(int)readWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(BOOL)ready;
-(void)reset;
-(NSInteger)skipWithLong:(NSInteger)arg0 ;
-(int)readWithJavaNioCharBuffer:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif