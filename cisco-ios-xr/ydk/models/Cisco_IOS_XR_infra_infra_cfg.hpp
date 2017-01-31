#ifndef _CISCO_IOS_XR_INFRA_INFRA_CFG_
#define _CISCO_IOS_XR_INFRA_INFRA_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_infra_cfg {

class Banners : public Entity
{
    public:
        Banners();
        ~Banners();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Banner : public Entity
    {
        public:
            Banner();
            ~Banner();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf banner_name; //type: BannerEnum
            YLeaf banner_text; //type: string



    }; // Banners::Banner


        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_infra_cfg::Banners::Banner> > banner;


}; // Banners


class BannerEnum : public Enum
{
    public:
        static const Enum::YLeaf exec;
        static const Enum::YLeaf incoming;
        static const Enum::YLeaf motd;
        static const Enum::YLeaf login;
        static const Enum::YLeaf slip_ppp;
        static const Enum::YLeaf prompt_timeout;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_INFRA_CFG_ */

