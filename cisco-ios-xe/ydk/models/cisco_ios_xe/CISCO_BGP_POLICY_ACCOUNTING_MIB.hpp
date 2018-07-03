#ifndef _CISCO_BGP_POLICY_ACCOUNTING_MIB_
#define _CISCO_BGP_POLICY_ACCOUNTING_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_BGP_POLICY_ACCOUNTING_MIB {

class CISCOBGPPOLICYACCOUNTINGMIB : public ydk::Entity
{
    public:
        CISCOBGPPOLICYACCOUNTINGMIB();
        ~CISCOBGPPOLICYACCOUNTINGMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class CbpAcctTable; //type: CISCOBGPPOLICYACCOUNTINGMIB::CbpAcctTable

        std::shared_ptr<cisco_ios_xe::CISCO_BGP_POLICY_ACCOUNTING_MIB::CISCOBGPPOLICYACCOUNTINGMIB::CbpAcctTable> cbpaccttable;
        
}; // CISCOBGPPOLICYACCOUNTINGMIB


class CISCOBGPPOLICYACCOUNTINGMIB::CbpAcctTable : public ydk::Entity
{
    public:
        CbpAcctTable();
        ~CbpAcctTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class CbpAcctEntry; //type: CISCOBGPPOLICYACCOUNTINGMIB::CbpAcctTable::CbpAcctEntry

        ydk::YList cbpacctentry;
        
}; // CISCOBGPPOLICYACCOUNTINGMIB::CbpAcctTable


class CISCOBGPPOLICYACCOUNTINGMIB::CbpAcctTable::CbpAcctEntry : public ydk::Entity
{
    public:
        CbpAcctEntry();
        ~CbpAcctEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cbpaccttrafficindex; //type: int32
        ydk::YLeaf cbpacctinpacketcount; //type: uint64
        ydk::YLeaf cbpacctinoctetcount; //type: uint64
        ydk::YLeaf cbpacctoutpacketcount; //type: uint64
        ydk::YLeaf cbpacctoutoctetcount; //type: uint64

}; // CISCOBGPPOLICYACCOUNTINGMIB::CbpAcctTable::CbpAcctEntry


}
}

#endif /* _CISCO_BGP_POLICY_ACCOUNTING_MIB_ */

