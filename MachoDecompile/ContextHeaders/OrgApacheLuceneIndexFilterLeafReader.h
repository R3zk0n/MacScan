// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXFILTERLEAFREADER_H
#define ORGAPACHELUCENEINDEXFILTERLEAFREADER_H



#import "OrgApacheLuceneIndexLeafReader.h"

@interface OrgApacheLuceneIndexFilterLeafReader : OrgApacheLuceneIndexLeafReader {
    OrgApacheLuceneIndexLeafReader *in_;
}




-(id)initWithOrgApacheLuceneIndexLeafReader:(id)arg0 ;
-(void)addCoreClosedListenerWithOrgApacheLuceneIndexLeafReader_CoreClosedListener:(id)arg0 ;
-(void)removeCoreClosedListenerWithOrgApacheLuceneIndexLeafReader_CoreClosedListener:(id)arg0 ;
-(id)getLiveDocs;
-(id)getFieldInfos;
-(id)getTermVectorsWithInt:(int)arg0 ;
-(int)numDocs;
-(int)maxDoc;
-(void)documentWithInt:(int)arg0 withOrgApacheLuceneIndexStoredFieldVisitor:(id)arg1 ;
-(void)doClose;
-(id)fields;
-(id)description;
-(id)getNumericDocValuesWithNSString:(id)arg0 ;
-(id)getBinaryDocValuesWithNSString:(id)arg0 ;
-(id)getSortedDocValuesWithNSString:(id)arg0 ;
-(id)getSortedNumericDocValuesWithNSString:(id)arg0 ;
-(id)getSortedSetDocValuesWithNSString:(id)arg0 ;
-(id)getNormValuesWithNSString:(id)arg0 ;
-(id)getDocsWithFieldWithNSString:(id)arg0 ;
-(void)checkIntegrity;
-(id)getDelegate;
-(void)dealloc;
+(id)unwrapWithOrgApacheLuceneIndexLeafReader:(id)arg0 ;


@end


#endif