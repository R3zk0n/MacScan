// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTORESINGLEINSTANCELOCKFACTORY_H
#define ORGAPACHELUCENESTORESINGLEINSTANCELOCKFACTORY_H



#import "OrgApacheLuceneStoreLockFactory.h"
#import "JavaUtilHashSet.h"

@interface OrgApacheLuceneStoreSingleInstanceLockFactory : OrgApacheLuceneStoreLockFactory {
    JavaUtilHashSet *locks_;
}




-(id)obtainLockWithOrgApacheLuceneStoreDirectory:(id)arg0 withNSString:(id)arg1 ;
-(id)init;
-(void)dealloc;


@end


#endif