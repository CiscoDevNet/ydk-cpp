#ifndef _CISCO_IOS_XE_EFP_OPER_
#define _CISCO_IOS_XE_EFP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_efp_oper {

class EfpStats : public Entity
{
    public:
        EfpStats();
        ~EfpStats();

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

        class EfpStat; //type: EfpStats::EfpStat

        std::vector<std::shared_ptr<Cisco_IOS_XE_efp_oper::EfpStats::EfpStat> > efp_stat;
        
}; // EfpStats


class EfpStats::EfpStat : public Entity
{
    public:
        EfpStat();
        ~EfpStat();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf interface; //type: string
        YLeaf in_pkts; //type: uint64
        YLeaf in_bytes; //type: uint64
        YLeaf out_pkts; //type: uint64
        YLeaf out_bytes; //type: uint64

}; // EfpStats::EfpStat


}
}

#endif /* _CISCO_IOS_XE_EFP_OPER_ */

