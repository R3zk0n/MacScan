// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREBUFFEREDINDEXINPUT_H
#define ORGAPACHELUCENESTOREBUFFEREDINDEXINPUT_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreIndexInput.h"
#import "IOSByteArray.h"
#import "OrgApacheLuceneStoreRandomAccessInput-Protocol.h"

@interface OrgApacheLuceneStoreBufferedIndexInput : OrgApacheLuceneStoreIndexInput <OrgApacheLuceneStoreRandomAccessInput>

 {
    IOSByteArray *buffer_;
    int bufferSize_;
    NSInteger bufferStart_;
    int bufferLength_;
    int bufferPosition_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(char)readByte;
-(id)initWithNSString:(id)arg0 ;
-(id)initWithNSString:(id)arg0 withOrgApacheLuceneStoreIOContext:(id)arg1 ;
-(id)initWithNSString:(id)arg0 withInt:(int)arg1 ;
-(void)setBufferSizeWithInt:(int)arg0 ;
-(void)newBufferWithByteArray:(id)arg0 ;
-(int)getBufferSize;
-(void)checkBufferSizeWithInt:(int)arg0 ;
-(void)readBytesWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)readBytesWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withBoolean:(BOOL)arg3 ;
-(short)readShort;
-(int)readInt;
-(NSInteger)readLong;
-(int)readVInt;
-(NSInteger)readVLong;
-(char)readByteWithLong:(NSInteger)arg0 ;
-(short)readShortWithLong:(NSInteger)arg0 ;
-(int)readIntWithLong:(NSInteger)arg0 ;
-(NSInteger)readLongWithLong:(NSInteger)arg0 ;
-(void)refill;
-(NSInteger)getFilePointer;
-(void)seekWithLong:(NSInteger)arg0 ;
-(id)clone;
-(id)sliceWithNSString:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 ;
-(int)flushBufferWithOrgApacheLuceneStoreIndexOutput:(id)arg0 withLong:(NSInteger)arg1 ;
-(void)dealloc;
+(int)bufferSizeWithOrgApacheLuceneStoreIOContext:(id)arg0 ;
+(id)wrapWithNSString:(id)arg0 withOrgApacheLuceneStoreIndexInput:(id)arg1 withLong:(NSInteger)arg2 withLong:(NSInteger)arg3 ;


@end


#endif