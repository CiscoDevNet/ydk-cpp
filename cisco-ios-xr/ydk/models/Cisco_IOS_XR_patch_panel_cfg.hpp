#ifndef _CISCO_IOS_XR_PATCH_PANEL_CFG_
#define _CISCO_IOS_XR_PATCH_PANEL_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_patch_panel_cfg {

class PatchPanel : public Entity
{
    public:
        PatchPanel();
        ~PatchPanel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


        YLeaf enable; //type: empty
        YLeaf user_name; //type: string
        YLeaf password; //type: string
        YLeaf ipv4; //type: string



}; // PatchPanel



}
}

#endif /* _CISCO_IOS_XR_PATCH_PANEL_CFG_ */

