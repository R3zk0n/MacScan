// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXLEAFREADER_H
#define ORGAPACHELUCENEINDEXLEAFREADER_H



#import "OrgApacheLuceneIndexIndexReader.h"
#import "OrgApacheLuceneIndexLeafReaderContext.h"

@interface OrgApacheLuceneIndexLeafReader : OrgApacheLuceneIndexIndexReader {
    OrgApacheLuceneIndexLeafReaderContext *readerContext_;
}




-(id)init;
-(id)getContext;
-(int)docFreqWithOrgApacheLuceneIndexTerm:(id)arg0 ;
-(NSInteger)totalTermFreqWithOrgApacheLuceneIndexTerm:(id)arg0 ;
-(NSInteger)getSumDocFreqWithNSString:(id)arg0 ;
-(int)getDocCountWithNSString:(id)arg0 ;
-(NSInteger)getSumTotalTermFreqWithNSString:(id)arg0 ;
-(id)termsWithNSString:(id)arg0 ;
-(id)postingsWithOrgApacheLuceneIndexTerm:(id)arg0 withInt:(int)arg1 ;
-(id)postingsWithOrgApacheLuceneIndexTerm:(id)arg0 ;
-(id)termDocsEnumWithOrgApacheLuceneIndexTerm:(id)arg0 ;
-(id)termPositionsEnumWithOrgApacheLuceneIndexTerm:(id)arg0 ;
-(void)dealloc;
+(void)addCoreClosedListenerAsReaderClosedListenerWithOrgApacheLuceneIndexIndexReader:(id)arg0 withOrgApacheLuceneIndexLeafReader_CoreClosedListener:(id)arg1 ;
+(void)removeCoreClosedListenerAsReaderClosedListenerWithOrgApacheLuceneIndexIndexReader:(id)arg0 withOrgApacheLuceneIndexLeafReader_CoreClosedListener:(id)arg1 ;


@end


#endif