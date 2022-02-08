// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTORERAMINPUTSTREAM_H
#define ORGAPACHELUCENESTORERAMINPUTSTREAM_H



#import "OrgApacheLuceneStoreIndexInput.h"
#import "OrgApacheLuceneStoreRAMFile.h"
#import "IOSByteArray.h"
#import "NSCopying-Protocol.h"

@interface OrgApacheLuceneStoreRAMInputStream : OrgApacheLuceneStoreIndexInput <NSCopying>

 {
    OrgApacheLuceneStoreRAMFile *file_;
    NSInteger length_;
    IOSByteArray *currentBuffer_;
    int currentBufferIndex_;
    int bufferPosition_;
    NSInteger bufferStart_;
    int bufferLength_;
}




-(id)initWithNSString:(id)arg0 withOrgApacheLuceneStoreRAMFile:(id)arg1 ;
-(id)initWithNSString:(id)arg0 withOrgApacheLuceneStoreRAMFile:(id)arg1 withLong:(NSInteger)arg2 ;
-(void)close;
-(NSInteger)length;
-(char)readByte;
-(void)readBytesWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)switchCurrentBufferWithBoolean:(BOOL)arg0 ;
-(NSInteger)getFilePointer;
-(void)seekWithLong:(NSInteger)arg0 ;
-(id)sliceWithNSString:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 ;
-(void)dealloc;


@end


#endif