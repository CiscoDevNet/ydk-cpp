#ifndef _CISCO_IOS_XR_MPLS_OAM_CFG_
#define _CISCO_IOS_XR_MPLS_OAM_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_oam_cfg {

class MplsOam : public Entity
{
    public:
        MplsOam();
        ~MplsOam();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


        YLeaf enable_oam; //type: empty
        YLeaf disable_vendor_extension; //type: empty

    class ReplyMode : public Entity
    {
        public:
            ReplyMode();
            ~ReplyMode();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class ControlChannel : public Entity
        {
            public:
                ControlChannel();
                ~ControlChannel();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf allow_reverse_lsp; //type: empty



        }; // MplsOam::ReplyMode::ControlChannel


            std::unique_ptr<Cisco_IOS_XR_mpls_oam_cfg::MplsOam::ReplyMode::ControlChannel> control_channel;


    }; // MplsOam::ReplyMode


        std::unique_ptr<Cisco_IOS_XR_mpls_oam_cfg::MplsOam::ReplyMode> reply_mode;


}; // MplsOam



}
}

#endif /* _CISCO_IOS_XR_MPLS_OAM_CFG_ */

