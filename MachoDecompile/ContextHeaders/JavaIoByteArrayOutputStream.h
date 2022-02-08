// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAIOBYTEARRAYOUTPUTSTREAM_H
#define JAVAIOBYTEARRAYOUTPUTSTREAM_H



#import "JavaIoOutputStream.h"
#import "IOSByteArray.h"

@interface JavaIoByteArrayOutputStream : JavaIoOutputStream {
    IOSByteArray *buf_;
    int count_;
}




-(id)init;
-(id)initWithInt:(int)arg0 ;
-(void)close;
-(void)expandWithInt:(int)arg0 ;
-(void)reset;
-(int)size;
-(id)toByteArray;
-(id)description;
-(id)toStringWithInt:(int)arg0 ;
-(id)toStringWithNSString:(id)arg0 ;
-(void)writeWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)writeWithInt:(int)arg0 ;
-(void)writeToWithJavaIoOutputStream:(id)arg0 ;
-(void)dealloc;
+(id)__annotations_toStringWithInt_;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif