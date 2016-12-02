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
            Value banner_name; //type: BannerEnum
            Value banner_text; //type: string


            class BannerEnum;


    }; // Banners::Banner


        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_infra_cfg::Banners::Banner> > banner;


}; // Banners


class BannerEnum : public Enum
{
    public:
        static const Enum::Value exec;
        static const Enum::Value incoming;
        static const Enum::Value motd;
        static const Enum::Value login;
        static const Enum::Value slip_ppp;
        static const Enum::Value prompt_timeout;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_INFRA_CFG_ */

