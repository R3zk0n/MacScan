// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEDOCUMENTDOCUMENTSTOREDFIELDVISITOR_H
#define ORGAPACHELUCENEDOCUMENTDOCUMENTSTOREDFIELDVISITOR_H



#import "OrgApacheLuceneIndexStoredFieldVisitor.h"
#import "OrgApacheLuceneDocumentDocument.h"
#import "JavaUtilSet-Protocol.h"

@interface OrgApacheLuceneDocumentDocumentStoredFieldVisitor : OrgApacheLuceneIndexStoredFieldVisitor {
    OrgApacheLuceneDocumentDocument *doc_;
    id<JavaUtilSet> *fieldsToAdd_;
}




-(id)initWithJavaUtilSet:(id)arg0 ;
-(id)initWithNSStringArray:(id)arg0 ;
-(id)init;
-(void)binaryFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withByteArray:(id)arg1 ;
-(void)stringFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withOrgApacheLuceneUtilBytesRef:(id)arg1 ;
-(void)stringFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withByteArray:(id)arg1 ;
-(void)intFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withInt:(int)arg1 ;
-(void)longFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withLong:(NSInteger)arg1 ;
-(void)floatFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withFloat:(float)arg1 ;
-(void)doubleFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withDouble:(CGFloat)arg1 ;
-(id)needsFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(id)getDocument;
-(void)dealloc;


@end


#endif