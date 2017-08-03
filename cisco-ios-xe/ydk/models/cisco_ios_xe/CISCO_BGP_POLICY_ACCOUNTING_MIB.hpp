#ifndef _CISCO_BGP_POLICY_ACCOUNTING_MIB_
#define _CISCO_BGP_POLICY_ACCOUNTING_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_BGP_POLICY_ACCOUNTING_MIB {

class CiscoBgpPolicyAccountingMib : public ydk::Entity
{
    public:
        CiscoBgpPolicyAccountingMib();
        ~CiscoBgpPolicyAccountingMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Cbpaccttable; //type: CiscoBgpPolicyAccountingMib::Cbpaccttable

        std::shared_ptr<CISCO_BGP_POLICY_ACCOUNTING_MIB::CiscoBgpPolicyAccountingMib::Cbpaccttable> cbpaccttable;
        
}; // CiscoBgpPolicyAccountingMib


class CiscoBgpPolicyAccountingMib::Cbpaccttable : public ydk::Entity
{
    public:
        Cbpaccttable();
        ~Cbpaccttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Cbpacctentry; //type: CiscoBgpPolicyAccountingMib::Cbpaccttable::Cbpacctentry

        std::vector<std::shared_ptr<CISCO_BGP_POLICY_ACCOUNTING_MIB::CiscoBgpPolicyAccountingMib::Cbpaccttable::Cbpacctentry> > cbpacctentry;
        
}; // CiscoBgpPolicyAccountingMib::Cbpaccttable


class CiscoBgpPolicyAccountingMib::Cbpaccttable::Cbpacctentry : public ydk::Entity
{
    public:
        Cbpacctentry();
        ~Cbpacctentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cbpaccttrafficindex; //type: int32
        ydk::YLeaf cbpacctinpacketcount; //type: uint64
        ydk::YLeaf cbpacctinoctetcount; //type: uint64
        ydk::YLeaf cbpacctoutpacketcount; //type: uint64
        ydk::YLeaf cbpacctoutoctetcount; //type: uint64

}; // CiscoBgpPolicyAccountingMib::Cbpaccttable::Cbpacctentry


}
}

#endif /* _CISCO_BGP_POLICY_ACCOUNTING_MIB_ */

