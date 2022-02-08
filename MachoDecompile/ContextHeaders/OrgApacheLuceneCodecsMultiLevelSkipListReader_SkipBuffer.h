// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSMULTILEVELSKIPLISTREADER_SKIPBUFFER_H
#define ORGAPACHELUCENECODECSMULTILEVELSKIPLISTREADER_SKIPBUFFER_H



#import "OrgApacheLuceneStoreIndexInput.h"
#import "IOSByteArray.h"

@interface OrgApacheLuceneCodecsMultiLevelSkipListReader_SkipBuffer : OrgApacheLuceneStoreIndexInput {
    IOSByteArray *data_;
    NSInteger pointer_;
    int pos_;
}




-(id)initWithOrgApacheLuceneStoreIndexInput:(id)arg0 withInt:(int)arg1 ;
-(void)close;
-(NSInteger)getFilePointer;
-(NSInteger)length;
-(char)readByte;
-(void)readBytesWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)seekWithLong:(NSInteger)arg0 ;
-(id)sliceWithNSString:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 ;
-(void)dealloc;


@end


#endif