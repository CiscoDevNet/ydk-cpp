#ifndef _CISCO_IOS_XR_MAN_EMS_CFG_
#define _CISCO_IOS_XR_MAN_EMS_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_man_ems_cfg {

class Grpc : public Entity
{
    public:
        Grpc();
        ~Grpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


        YLeaf port; //type: uint32
        YLeaf enable; //type: empty
        YLeaf max_request_per_user; //type: uint32
        YLeaf address_family; //type: string
        YLeaf max_request_total; //type: uint32

    class Tls : public Entity
    {
        public:
            Tls();
            ~Tls();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf trustpoint; //type: string
            YLeaf enable; //type: empty



    }; // Grpc::Tls


        std::unique_ptr<Cisco_IOS_XR_man_ems_cfg::Grpc::Tls> tls;


}; // Grpc



}
}

#endif /* _CISCO_IOS_XR_MAN_EMS_CFG_ */

