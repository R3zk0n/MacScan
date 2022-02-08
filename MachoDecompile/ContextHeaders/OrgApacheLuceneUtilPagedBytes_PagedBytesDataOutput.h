// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPAGEDBYTES_PAGEDBYTESDATAOUTPUT_H
#define ORGAPACHELUCENEUTILPAGEDBYTES_PAGEDBYTESDATAOUTPUT_H



#import "OrgApacheLuceneStoreDataOutput.h"
#import "OrgApacheLuceneUtilPagedBytes.h"

@interface OrgApacheLuceneUtilPagedBytes_PagedBytesDataOutput : OrgApacheLuceneStoreDataOutput {
    OrgApacheLuceneUtilPagedBytes *this$0_;
}




-(void)writeByteWithByte:(char)arg0 ;
-(void)writeBytesWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(NSInteger)getPosition;
-(id)initWithOrgApacheLuceneUtilPagedBytes:(id)arg0 ;
-(void)dealloc;


@end


#endif