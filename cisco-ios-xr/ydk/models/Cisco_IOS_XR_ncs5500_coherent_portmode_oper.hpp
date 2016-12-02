#ifndef _CISCO_IOS_XR_NCS5500_COHERENT_PORTMODE_OPER_
#define _CISCO_IOS_XR_NCS5500_COHERENT_PORTMODE_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ncs5500_coherent_portmode_oper {

class ControllerPortMode : public Entity
{
    public:
        ControllerPortMode();
        ~ControllerPortMode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class OpticsName : public Entity
    {
        public:
            OpticsName();
            ~OpticsName();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value interface_name; //type: string


        class PortModeInfo : public Entity
        {
            public:
                PortModeInfo();
                ~PortModeInfo();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value intf_name; //type: string
                Value speed; //type: string
                Value fec; //type: string
                Value diff; //type: string
                Value modulation; //type: string




        }; // ControllerPortMode::OpticsName::PortModeInfo


            std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_portmode_oper::ControllerPortMode::OpticsName::PortModeInfo> port_mode_info;


    }; // ControllerPortMode::OpticsName


        std::vector<std::unique_ptr<Cisco_IOS_XR_ncs5500_coherent_portmode_oper::ControllerPortMode::OpticsName> > optics_name;


}; // ControllerPortMode



}
}

#endif /* _CISCO_IOS_XR_NCS5500_COHERENT_PORTMODE_OPER_ */

