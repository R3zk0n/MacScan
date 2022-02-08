// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXBASECOMPOSITEREADER_H
#define ORGAPACHELUCENEINDEXBASECOMPOSITEREADER_H



#import "OrgApacheLuceneIndexCompositeReader.h"
#import "IOSObjectArray.h"
#import "IOSIntArray.h"
#import "JavaUtilList-Protocol.h"

@interface OrgApacheLuceneIndexBaseCompositeReader : OrgApacheLuceneIndexCompositeReader {
    IOSObjectArray *subReaders_;
    IOSIntArray *starts_;
    int maxDoc_;
    int numDocs_;
    id<JavaUtilList> *subReadersList_;
}




-(id)initWithOrgApacheLuceneIndexIndexReaderArray:(id)arg0 ;
-(id)getTermVectorsWithInt:(int)arg0 ;
-(int)numDocs;
-(int)maxDoc;
-(void)documentWithInt:(int)arg0 withOrgApacheLuceneIndexStoredFieldVisitor:(id)arg1 ;
-(int)docFreqWithOrgApacheLuceneIndexTerm:(id)arg0 ;
-(NSInteger)totalTermFreqWithOrgApacheLuceneIndexTerm:(id)arg0 ;
-(NSInteger)getSumDocFreqWithNSString:(id)arg0 ;
-(int)getDocCountWithNSString:(id)arg0 ;
-(NSInteger)getSumTotalTermFreqWithNSString:(id)arg0 ;
-(int)readerIndexWithInt:(int)arg0 ;
-(int)readerBaseWithInt:(int)arg0 ;
-(id)getSequentialSubReaders;
-(void)dealloc;


@end


#endif