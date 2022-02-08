// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXFIELDINFOS_FIELDNUMBERS_H
#define ORGAPACHELUCENEINDEXFIELDINFOS_FIELDNUMBERS_H


#import <Foundation/Foundation.h>

#import "JavaUtilMap-Protocol.h"
#import "JavaUtilMap-Protocol.h"
#import "JavaUtilMap-Protocol.h"

@interface OrgApacheLuceneIndexFieldInfos_FieldNumbers : NSObject {
    id<JavaUtilMap> *numberToName_;
    id<JavaUtilMap> *nameToNumber_;
    id<JavaUtilMap> *docValuesType_;
    int lowestUnassignedFieldNumber_;
}




-(id)init;
-(int)addOrGetWithNSString:(id)arg0 withInt:(int)arg1 withOrgApacheLuceneIndexDocValuesTypeEnum:(id)arg2 ;
-(void)verifyConsistentWithJavaLangInteger:(id)arg0 withNSString:(id)arg1 withOrgApacheLuceneIndexDocValuesTypeEnum:(id)arg2 ;
-(BOOL)containsWithNSString:(id)arg0 withOrgApacheLuceneIndexDocValuesTypeEnum:(id)arg1 ;
-(void)clear;
-(void)setDocValuesTypeWithInt:(int)arg0 withNSString:(id)arg1 withOrgApacheLuceneIndexDocValuesTypeEnum:(id)arg2 ;
-(void)dealloc;


@end


#endif