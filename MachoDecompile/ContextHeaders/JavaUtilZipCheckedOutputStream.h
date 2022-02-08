// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILZIPCHECKEDOUTPUTSTREAM_H
#define JAVAUTILZIPCHECKEDOUTPUTSTREAM_H



#import "JavaIoFilterOutputStream.h"
#import "JavaUtilZipChecksum-Protocol.h"

@interface JavaUtilZipCheckedOutputStream : JavaIoFilterOutputStream {
    id<JavaUtilZipChecksum> *check_;
}




-(id)initWithJavaIoOutputStream:(id)arg0 withJavaUtilZipChecksum:(id)arg1 ;
-(id)getChecksum;
-(void)writeWithInt:(int)arg0 ;
-(void)writeWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif