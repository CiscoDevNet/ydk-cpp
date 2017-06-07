#ifndef _CISCO_IOS_XE_CFM_OPER_
#define _CISCO_IOS_XE_CFM_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_cfm_oper {

class CfmStatistics : public Entity
{
    public:
        CfmStatistics();
        ~CfmStatistics();

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

        class CfmMeps; //type: CfmStatistics::CfmMeps

        std::shared_ptr<Cisco_IOS_XE_cfm_oper::CfmStatistics::CfmMeps> cfm_meps;
        
}; // CfmStatistics


class CfmStatistics::CfmMeps : public Entity
{
    public:
        CfmMeps();
        ~CfmMeps();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CfmMep; //type: CfmStatistics::CfmMeps::CfmMep

        std::vector<std::shared_ptr<Cisco_IOS_XE_cfm_oper::CfmStatistics::CfmMeps::CfmMep> > cfm_mep;
        
}; // CfmStatistics::CfmMeps


class CfmStatistics::CfmMeps::CfmMep : public Entity
{
    public:
        CfmMep();
        ~CfmMep();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain_name; //type: string
        YLeaf ma_name; //type: string
        YLeaf mpid; //type: uint32
        YLeaf ccm_transmitted; //type: uint64
        YLeaf ccm_seq_errors; //type: uint64
        YLeaf ltr_unexpected; //type: uint64
        YLeaf lbr_transmitted; //type: uint64
        YLeaf lbr_seq_errors; //type: uint64
        YLeaf lbr_received_ok; //type: uint64
        YLeaf lbr_received_bad; //type: uint64
        class LastCleared; //type: CfmStatistics::CfmMeps::CfmMep::LastCleared

        std::shared_ptr<Cisco_IOS_XE_cfm_oper::CfmStatistics::CfmMeps::CfmMep::LastCleared> last_cleared;
        
}; // CfmStatistics::CfmMeps::CfmMep


class CfmStatistics::CfmMeps::CfmMep::LastCleared : public Entity
{
    public:
        LastCleared();
        ~LastCleared();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf never; //type: empty
        YLeaf time; //type: string

}; // CfmStatistics::CfmMeps::CfmMep::LastCleared

class CfmLastClearedTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf never_cleared;
        static const Enum::YLeaf cleared_before;

};


}
}

#endif /* _CISCO_IOS_XE_CFM_OPER_ */

