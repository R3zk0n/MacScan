// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILFSTUTIL_FSTPATH_H
#define ORGAPACHELUCENEUTILFSTUTIL_FSTPATH_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilFstFST_Arc.h"
#import "OrgApacheLuceneUtilIntsRefBuilder.h"
#import "JavaLangCharSequence-Protocol.h"

@interface OrgApacheLuceneUtilFstUtil_FSTPath : NSObject {
    OrgApacheLuceneUtilFstFST_Arc *arc_;
    id *cost_;
    OrgApacheLuceneUtilIntsRefBuilder *input_;
    float boost_;
    id<JavaLangCharSequence> *context_;
}




-(id)initWithId:(id)arg0 withOrgApacheLuceneUtilFstFST_Arc:(id)arg1 withOrgApacheLuceneUtilIntsRefBuilder:(id)arg2 ;
-(id)initWithId:(id)arg0 withOrgApacheLuceneUtilFstFST_Arc:(id)arg1 withOrgApacheLuceneUtilIntsRefBuilder:(id)arg2 withFloat:(float)arg3 withJavaLangCharSequence:(id)arg4 ;
-(id)newPathWithId:(id)arg0 withOrgApacheLuceneUtilIntsRefBuilder:(id)arg1 ;
-(id)description;
-(void)dealloc;


@end


#endif