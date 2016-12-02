#ifndef _CISCO_IOS_XR_SHELLUTIL_FILESYSTEM_OPER_
#define _CISCO_IOS_XR_SHELLUTIL_FILESYSTEM_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_shellutil_filesystem_oper {

class FileSystem : public Entity
{
    public:
        FileSystem();
        ~FileSystem();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Node : public Entity
    {
        public:
            Node();
            ~Node();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value node_name; //type: string


        class FileSystem_ : public Entity
        {
            public:
                FileSystem_();
                ~FileSystem_();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value size; //type: string
                Value free; //type: string
                Value type; //type: string
                Value flags; //type: string
                Value prefixes; //type: string




        }; // FileSystem::Node::FileSystem_


            std::vector<std::unique_ptr<Cisco_IOS_XR_shellutil_filesystem_oper::FileSystem::Node::FileSystem_> > file_system;


    }; // FileSystem::Node


        std::vector<std::unique_ptr<Cisco_IOS_XR_shellutil_filesystem_oper::FileSystem::Node> > node;


}; // FileSystem



}
}

#endif /* _CISCO_IOS_XR_SHELLUTIL_FILESYSTEM_OPER_ */

