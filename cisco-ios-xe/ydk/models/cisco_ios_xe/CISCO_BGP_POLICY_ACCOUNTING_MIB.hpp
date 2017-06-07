#ifndef _CISCO_BGP_POLICY_ACCOUNTING_MIB_
#define _CISCO_BGP_POLICY_ACCOUNTING_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_BGP_POLICY_ACCOUNTING_MIB {

class CiscoBgpPolicyAccountingMib : public Entity
{
    public:
        CiscoBgpPolicyAccountingMib();
        ~CiscoBgpPolicyAccountingMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Cbpaccttable; //type: CiscoBgpPolicyAccountingMib::Cbpaccttable

        std::shared_ptr<CISCO_BGP_POLICY_ACCOUNTING_MIB::CiscoBgpPolicyAccountingMib::Cbpaccttable> cbpaccttable;
        
}; // CiscoBgpPolicyAccountingMib


class CiscoBgpPolicyAccountingMib::Cbpaccttable : public Entity
{
    public:
        Cbpaccttable();
        ~Cbpaccttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cbpacctentry; //type: CiscoBgpPolicyAccountingMib::Cbpaccttable::Cbpacctentry

        std::vector<std::shared_ptr<CISCO_BGP_POLICY_ACCOUNTING_MIB::CiscoBgpPolicyAccountingMib::Cbpaccttable::Cbpacctentry> > cbpacctentry;
        
}; // CiscoBgpPolicyAccountingMib::Cbpaccttable


class CiscoBgpPolicyAccountingMib::Cbpaccttable::Cbpacctentry : public Entity
{
    public:
        Cbpacctentry();
        ~Cbpacctentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cbpaccttrafficindex; //type: int32
        YLeaf cbpacctinpacketcount; //type: uint64
        YLeaf cbpacctinoctetcount; //type: uint64
        YLeaf cbpacctoutpacketcount; //type: uint64
        YLeaf cbpacctoutoctetcount; //type: uint64

}; // CiscoBgpPolicyAccountingMib::Cbpaccttable::Cbpacctentry


}
}

#endif /* _CISCO_BGP_POLICY_ACCOUNTING_MIB_ */

