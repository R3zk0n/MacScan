// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXFIELDINFOS_BUILDER_H
#define ORGAPACHELUCENEINDEXFIELDINFOS_BUILDER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexFieldInfos_FieldNumbers.h"
#import "JavaUtilHashMap.h"

@interface OrgApacheLuceneIndexFieldInfos_Builder : NSObject {
    OrgApacheLuceneIndexFieldInfos_FieldNumbers *globalFieldNumbers_;
    JavaUtilHashMap *byName_;
}




-(id)init;
-(id)initWithOrgApacheLuceneIndexFieldInfos_FieldNumbers:(id)arg0 ;
-(void)addWithOrgApacheLuceneIndexFieldInfos:(id)arg0 ;
-(id)getOrAddWithNSString:(id)arg0 ;
-(id)addOrUpdateInternalWithNSString:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 withBoolean:(BOOL)arg3 withBoolean:(BOOL)arg4 withOrgApacheLuceneIndexIndexOptionsEnum:(id)arg5 withOrgApacheLuceneIndexDocValuesTypeEnum:(id)arg6 ;
-(id)addWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(id)fieldInfoWithNSString:(id)arg0 ;
-(id)finish;
-(void)dealloc;


@end


#endif