#ifndef _CISCO_IOS_XR_TTY_VTY_CFG_
#define _CISCO_IOS_XR_TTY_VTY_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_tty_vty_cfg {

class Vty : public Entity
{
    public:
        Vty();
        ~Vty();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class VtyPools : public Entity
    {
        public:
            VtyPools();
            ~VtyPools();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class VtyPool : public Entity
        {
            public:
                VtyPool();
                ~VtyPool();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value pool_name; //type: string
                Value first_vty; //type: int32
                Value last_vty; //type: int32
                Value line_template; //type: string
                Value none; //type: string




        }; // Vty::VtyPools::VtyPool


            std::vector<std::unique_ptr<Cisco_IOS_XR_tty_vty_cfg::Vty::VtyPools::VtyPool> > vty_pool;


    }; // Vty::VtyPools


        std::unique_ptr<Cisco_IOS_XR_tty_vty_cfg::Vty::VtyPools> vty_pools;


}; // Vty



}
}

#endif /* _CISCO_IOS_XR_TTY_VTY_CFG_ */

