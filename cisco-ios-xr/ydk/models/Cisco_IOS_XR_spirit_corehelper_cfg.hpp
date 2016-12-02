#ifndef _CISCO_IOS_XR_SPIRIT_COREHELPER_CFG_
#define _CISCO_IOS_XR_SPIRIT_COREHELPER_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_spirit_corehelper_cfg {

class Exception : public Entity
{
    public:
        Exception();
        ~Exception();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class File : public Entity
    {
        public:
            File();
            ~File();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value choice2; //type: string
            Value choice1; //type: string
            Value choice3; //type: string




    }; // Exception::File


        std::unique_ptr<Cisco_IOS_XR_spirit_corehelper_cfg::Exception::File> file;


}; // Exception



}
}

#endif /* _CISCO_IOS_XR_SPIRIT_COREHELPER_CFG_ */

