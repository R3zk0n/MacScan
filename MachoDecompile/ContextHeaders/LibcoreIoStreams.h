// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREIOSTREAMS_H
#define LIBCOREIOSTREAMS_H


#import <Foundation/Foundation.h>


@interface LibcoreIoStreams : NSObject



-(id)init;
+(int)readSingleByteWithJavaIoInputStream:(id)arg0 ;
+(void)writeSingleByteWithJavaIoOutputStream:(id)arg0 withInt:(int)arg1 ;
+(void)readFullyWithJavaIoInputStream:(id)arg0 withByteArray:(id)arg1 ;
+(void)readFullyWithJavaIoInputStream:(id)arg0 withByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(id)readFullyWithJavaIoInputStream:(id)arg0 ;
+(id)readFullyNoCloseWithJavaIoInputStream:(id)arg0 ;
+(id)readFullyWithJavaIoReader:(id)arg0 ;
+(void)skipAllWithJavaIoInputStream:(id)arg0 ;
+(NSInteger)skipByReadingWithJavaIoInputStream:(id)arg0 withLong:(NSInteger)arg1 ;
+(int)copy__WithJavaIoInputStream:(id)arg0 withJavaIoOutputStream:(id)arg1 ;
+(id)readAsciiLineWithJavaIoInputStream:(id)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif