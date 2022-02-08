// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREBASEDIRECTORY_H
#define ORGAPACHELUCENESTOREBASEDIRECTORY_H



#import "OrgApacheLuceneStoreDirectory.h"
#import "OrgApacheLuceneStoreLockFactory.h"

@interface OrgApacheLuceneStoreBaseDirectory : OrgApacheLuceneStoreDirectory {
    uint8_t isOpen_;
    OrgApacheLuceneStoreLockFactory *lockFactory_;
}




-(id)initWithOrgApacheLuceneStoreLockFactory:(id)arg0 ;
-(id)obtainLockWithNSString:(id)arg0 ;
-(void)ensureOpen;
-(id)description;
-(void)dealloc;


@end


#endif