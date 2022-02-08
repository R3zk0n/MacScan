// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPAGEDBYTES_PAGEDBYTESDATAINPUT_H
#define ORGAPACHELUCENEUTILPAGEDBYTES_PAGEDBYTESDATAINPUT_H



#import "OrgApacheLuceneStoreDataInput.h"
#import "OrgApacheLuceneUtilPagedBytes.h"
#import "IOSByteArray.h"

@interface OrgApacheLuceneUtilPagedBytes_PagedBytesDataInput : OrgApacheLuceneStoreDataInput {
    OrgApacheLuceneUtilPagedBytes *this$0_;
    int currentBlockIndex_;
    int currentBlockUpto_;
    IOSByteArray *currentBlock_;
}




-(id)initWithOrgApacheLuceneUtilPagedBytes:(id)arg0 ;
-(id)clone;
-(NSInteger)getPosition;
-(void)setPositionWithLong:(NSInteger)arg0 ;
-(char)readByte;
-(void)readBytesWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)nextBlock;
-(void)dealloc;


@end


#endif