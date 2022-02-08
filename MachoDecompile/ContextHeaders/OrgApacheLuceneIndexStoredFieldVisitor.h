// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXSTOREDFIELDVISITOR_H
#define ORGAPACHELUCENEINDEXSTOREDFIELDVISITOR_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilBytesRef.h"

@interface OrgApacheLuceneIndexStoredFieldVisitor : NSObject {
    OrgApacheLuceneUtilBytesRef *cache_;
}




-(id)init;
-(id)getReusableBytesRef;
-(void)setReusableBytesRefWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(void)binaryFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withOrgApacheLuceneUtilBytesRef:(id)arg1 ;
-(void)stringFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withOrgApacheLuceneUtilBytesRef:(id)arg1 ;
-(void)binaryFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withByteArray:(id)arg1 ;
-(void)stringFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withByteArray:(id)arg1 ;
-(void)intFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withInt:(int)arg1 ;
-(void)longFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withLong:(NSInteger)arg1 ;
-(void)floatFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withFloat:(float)arg1 ;
-(void)doubleFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withDouble:(CGFloat)arg1 ;
-(void)dealloc;


@end


#endif