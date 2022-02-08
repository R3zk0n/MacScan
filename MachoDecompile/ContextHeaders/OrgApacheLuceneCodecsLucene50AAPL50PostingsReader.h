// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50AAPL50POSTINGSREADER_H
#define ORGAPACHELUCENECODECSLUCENE50AAPL50POSTINGSREADER_H



#import "OrgApacheLuceneCodecsPostingsReaderBase.h"
#import "OrgApacheLuceneCodecsLucene50ForUtil.h"
#import "OrgApacheLuceneStoreIndexInput.h"

@interface OrgApacheLuceneCodecsLucene50AAPL50PostingsReader : OrgApacheLuceneCodecsPostingsReaderBase {
    OrgApacheLuceneCodecsLucene50ForUtil *forUtil_;
    OrgApacheLuceneStoreIndexInput *docIn_;
    OrgApacheLuceneStoreIndexInput *posIn_;
    OrgApacheLuceneStoreIndexInput *payIn_;
    int version__;
}




-(id)initWithOrgApacheLuceneIndexSegmentReadState:(id)arg0 ;
-(void)init__WithOrgApacheLuceneStoreIndexInput:(id)arg0 withOrgApacheLuceneIndexSegmentReadState:(id)arg1 ;
-(id)newTermState;
-(void)close;
-(void)decodeTermWithLongArray:(id)arg0 withOrgApacheLuceneStoreDataInput:(id)arg1 withOrgApacheLuceneIndexFieldInfo:(id)arg2 withOrgApacheLuceneCodecsBlockTermState:(id)arg3 withBoolean:(BOOL)arg4 ;
-(id)postingsWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withOrgApacheLuceneCodecsBlockTermState:(id)arg1 withOrgApacheLuceneIndexPostingsEnum:(id)arg2 withInt:(int)arg3 ;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(void)checkIntegrity;
-(id)description;
-(void)dealloc;
+(void)readVIntBlockWithOrgApacheLuceneStoreIndexInput:(id)arg0 withIntArray:(id)arg1 withIntArray:(id)arg2 withIntArray:(id)arg3 withInt:(int)arg4 withBoolean:(BOOL)arg5 ;
+(void)initialize;


@end


#endif