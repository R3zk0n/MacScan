// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXFIELDINFO_H
#define ORGAPACHELUCENEINDEXFIELDINFO_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexDocValuesTypeEnum.h"
#import "OrgApacheLuceneIndexIndexOptionsEnum.h"
#import "JavaUtilMap-Protocol.h"

@interface OrgApacheLuceneIndexFieldInfo : NSObject {
    NSString *name_;
    int number_;
    OrgApacheLuceneIndexDocValuesTypeEnum *docValuesType_;
    BOOL storeTermVector_;
    BOOL omitNorms_;
    OrgApacheLuceneIndexIndexOptionsEnum *indexOptions_;
    BOOL storePayloads_;
    id<JavaUtilMap> *attributes_;
    NSInteger dvGen_;
}




-(id)initWithNSString:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 withBoolean:(BOOL)arg3 withBoolean:(BOOL)arg4 withOrgApacheLuceneIndexIndexOptionsEnum:(id)arg5 withOrgApacheLuceneIndexDocValuesTypeEnum:(id)arg6 withLong:(NSInteger)arg7 withJavaUtilMap:(id)arg8 ;
-(BOOL)checkConsistency;
-(void)updateWithBoolean:(BOOL)arg0 withBoolean:(BOOL)arg1 withBoolean:(BOOL)arg2 withOrgApacheLuceneIndexIndexOptionsEnum:(id)arg3 ;
-(void)setDocValuesTypeWithOrgApacheLuceneIndexDocValuesTypeEnum:(id)arg0 ;
-(id)getIndexOptions;
-(void)setIndexOptionsWithOrgApacheLuceneIndexIndexOptionsEnum:(id)arg0 ;
-(id)getDocValuesType;
-(void)setDocValuesGenWithLong:(NSInteger)arg0 ;
-(NSInteger)getDocValuesGen;
-(void)setStoreTermVectors;
-(void)setStorePayloads;
-(BOOL)omitsNorms;
-(void)setOmitsNorms;
-(BOOL)hasNorms;
-(BOOL)hasPayloads;
-(BOOL)hasVectors;
-(id)getAttributeWithNSString:(id)arg0 ;
-(id)putAttributeWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)attributes;
-(void)dealloc;


@end


#endif