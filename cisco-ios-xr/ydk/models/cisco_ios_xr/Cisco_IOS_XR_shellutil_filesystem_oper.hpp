#ifndef _CISCO_IOS_XR_SHELLUTIL_FILESYSTEM_OPER_
#define _CISCO_IOS_XR_SHELLUTIL_FILESYSTEM_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

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
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Node; //type: FileSystem::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_shellutil_filesystem_oper::FileSystem::Node> > node;


}; // FileSystem


class FileSystem::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string

        class FileSystem_; //type: FileSystem::Node::FileSystem_

        std::vector<std::shared_ptr<Cisco_IOS_XR_shellutil_filesystem_oper::FileSystem::Node::FileSystem_> > file_system;


}; // FileSystem::Node


class FileSystem::Node::FileSystem_ : public Entity
{
    public:
        FileSystem_();
        ~FileSystem_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf size; //type: string
        YLeaf free; //type: string
        YLeaf type; //type: string
        YLeaf flags; //type: string
        YLeaf prefixes; //type: string



}; // FileSystem::Node::FileSystem_


}
}

#endif /* _CISCO_IOS_XR_SHELLUTIL_FILESYSTEM_OPER_ */

