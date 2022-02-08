// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAIORANDOMACCESSFILE_H
#define JAVAIORANDOMACCESSFILE_H


#import <Foundation/Foundation.h>

#import "JavaIoFileDescriptor.h"
#import "JavaNioChannelsFileChannel.h"
#import "DalvikSystemCloseGuard.h"
#import "IOSByteArray.h"
#import "JavaIoDataInput-Protocol.h"
#import "JavaIoDataOutput-Protocol.h"
#import "JavaIoCloseable-Protocol.h"

@interface JavaIoRandomAccessFile : NSObject <JavaIoDataInput, JavaIoDataOutput, JavaIoCloseable>

 {
    JavaIoFileDescriptor *fd_;
    BOOL syncMetadata_;
    JavaNioChannelsFileChannel *channel_;
    int mode_;
    DalvikSystemCloseGuard *guard_;
    IOSByteArray *scratch_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaIoFile:(id)arg0 withNSString:(id)arg1 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(void)close;
-(void)dealloc;
-(id)getChannel;
-(id)getFD;
-(NSInteger)getFilePointer;
-(NSInteger)length;
-(int)read;
-(int)readWithByteArray:(id)arg0 ;
-(int)readWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(BOOL)readBoolean;
-(char)readByte;
-(unsigned short)readChar;
-(CGFloat)readDouble;
-(float)readFloat;
-(void)readFullyWithByteArray:(id)arg0 ;
-(void)readFullyWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)readInt;
-(id)readLine;
-(NSInteger)readLong;
-(short)readShort;
-(int)readUnsignedByte;
-(int)readUnsignedShort;
-(id)readUTF;
-(void)seekWithLong:(NSInteger)arg0 ;
-(void)setLengthWithLong:(NSInteger)arg0 ;
-(int)skipBytesWithInt:(int)arg0 ;
-(void)writeWithByteArray:(id)arg0 ;
-(void)writeWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)writeWithInt:(int)arg0 ;
-(void)writeBooleanWithBoolean:(BOOL)arg0 ;
-(void)writeByteWithInt:(int)arg0 ;
-(void)writeBytesWithNSString:(id)arg0 ;
-(void)writeCharWithInt:(int)arg0 ;
-(void)writeCharsWithNSString:(id)arg0 ;
-(void)writeDoubleWithDouble:(CGFloat)arg0 ;
-(void)writeFloatWithFloat:(float)arg0 ;
-(void)writeIntWithInt:(int)arg0 ;
-(void)writeLongWithLong:(NSInteger)arg0 ;
-(void)writeShortWithInt:(int)arg0 ;
-(void)writeUTFWithNSString:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif