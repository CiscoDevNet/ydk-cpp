
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_193.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::UtdSt::Utd::WebFilter::Block::LocalServer::LocalServer()
{

    yang_name = "local-server"; yang_parent_name = "block"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::WebFilter::Block::LocalServer::~LocalServer()
{
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Block::LocalServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/web-filter/block/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::WebFilter::Block::LocalServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Block::LocalServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Block::LocalServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Block::LocalServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::UtdSt::Utd::WebFilter::Block::LocalServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Block::LocalServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Profile()
    :
    id{YType::str, "id"},
    http_ports{YType::str, "http-ports"}
    	,
    block_page_interface(std::make_shared<Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface>())
	,content(std::make_shared<Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content>())
{
    block_page_interface->parent = this;
    content->parent = this;

    yang_name = "profile"; yang_parent_name = "local-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::~Profile()
{
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::has_data() const
{
    return id.is_set
	|| http_ports.is_set
	|| (block_page_interface !=  nullptr && block_page_interface->has_data())
	|| (content !=  nullptr && content->has_data());
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(http_ports.yfilter)
	|| (block_page_interface !=  nullptr && block_page_interface->has_operation())
	|| (content !=  nullptr && content->has_operation());
}

std::string Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/web-filter/block/local-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (http_ports.is_set || is_set(http_ports.yfilter)) leaf_name_data.push_back(http_ports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "block-page-interface")
    {
        if(block_page_interface == nullptr)
        {
            block_page_interface = std::make_shared<Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface>();
        }
        return block_page_interface;
    }

    if(child_yang_name == "content")
    {
        if(content == nullptr)
        {
            content = std::make_shared<Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content>();
        }
        return content;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(block_page_interface != nullptr)
    {
        children["block-page-interface"] = block_page_interface;
    }

    if(content != nullptr)
    {
        children["content"] = content;
    }

    return children;
}

void Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "http-ports")
    {
        http_ports = value;
        http_ports.value_namespace = name_space;
        http_ports.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "http-ports")
    {
        http_ports.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "block-page-interface" || name == "content" || name == "id" || name == "http-ports")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface::BlockPageInterface()
    :
    loopback{YType::uint32, "Loopback"}
{

    yang_name = "block-page-interface"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface::~BlockPageInterface()
{
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface::has_data() const
{
    return loopback.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block-page-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::BlockPageInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Loopback")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content::Content()
    :
    text{YType::str, "text"},
    file{YType::str, "file"}
{

    yang_name = "content"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content::~Content()
{
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content::has_data() const
{
    return text.is_set
	|| file.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(text.yfilter)
	|| ydk::is_set(file.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "content";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Block::LocalServer::Profile::Content::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "text" || name == "file")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Block::Page::Page()
{

    yang_name = "page"; yang_parent_name = "block"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::WebFilter::Block::Page::~Page()
{
}

bool Native::UtdSt::Utd::WebFilter::Block::Page::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Native::UtdSt::Utd::WebFilter::Block::Page::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Block::Page::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/web-filter/block/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::WebFilter::Block::Page::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "page";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Block::Page::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Block::Page::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::UtdSt::Utd::WebFilter::Block::Page::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Block::Page::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::UtdSt::Utd::WebFilter::Block::Page::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Block::Page::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Block::Page::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Block::Page::Profile::Profile()
    :
    id{YType::str, "id"},
    file{YType::str, "file"},
    redirect_url{YType::str, "redirect-url"},
    text{YType::str, "text"}
{

    yang_name = "profile"; yang_parent_name = "page"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::WebFilter::Block::Page::Profile::~Profile()
{
}

bool Native::UtdSt::Utd::WebFilter::Block::Page::Profile::has_data() const
{
    return id.is_set
	|| file.is_set
	|| redirect_url.is_set
	|| text.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Block::Page::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(file.yfilter)
	|| ydk::is_set(redirect_url.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Block::Page::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/web-filter/block/page/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::WebFilter::Block::Page::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Block::Page::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (file.is_set || is_set(file.yfilter)) leaf_name_data.push_back(file.get_name_leafdata());
    if (redirect_url.is_set || is_set(redirect_url.yfilter)) leaf_name_data.push_back(redirect_url.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Block::Page::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Block::Page::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdSt::Utd::WebFilter::Block::Page::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "file")
    {
        file = value;
        file.value_namespace = name_space;
        file.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect-url")
    {
        redirect_url = value;
        redirect_url.value_namespace = name_space;
        redirect_url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Block::Page::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "file")
    {
        file.yfilter = yfilter;
    }
    if(value_path == "redirect-url")
    {
        redirect_url.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Block::Page::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "file" || name == "redirect-url" || name == "text")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Domain::Domain()
{

    yang_name = "domain"; yang_parent_name = "web-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::WebFilter::Domain::~Domain()
{
}

bool Native::UtdSt::Utd::WebFilter::Domain::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Native::UtdSt::Utd::WebFilter::Domain::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Domain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/web-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::WebFilter::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::UtdSt::Utd::WebFilter::Domain::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::UtdSt::Utd::WebFilter::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::Profile()
    :
    id{YType::str, "id"},
    alert{YType::enumeration, "alert"}
    	,
    blacklist(nullptr) // presence node
	,redirect_server(std::make_shared<Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer>())
	,whitelist(nullptr) // presence node
{
    redirect_server->parent = this;

    yang_name = "profile"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::~Profile()
{
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::has_data() const
{
    return id.is_set
	|| alert.is_set
	|| (blacklist !=  nullptr && blacklist->has_data())
	|| (redirect_server !=  nullptr && redirect_server->has_data())
	|| (whitelist !=  nullptr && whitelist->has_data());
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(alert.yfilter)
	|| (blacklist !=  nullptr && blacklist->has_operation())
	|| (redirect_server !=  nullptr && redirect_server->has_operation())
	|| (whitelist !=  nullptr && whitelist->has_operation());
}

std::string Native::UtdSt::Utd::WebFilter::Domain::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/web-filter/domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::WebFilter::Domain::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Domain::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (alert.is_set || is_set(alert.yfilter)) leaf_name_data.push_back(alert.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Domain::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "blacklist")
    {
        if(blacklist == nullptr)
        {
            blacklist = std::make_shared<Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist>();
        }
        return blacklist;
    }

    if(child_yang_name == "redirect-server")
    {
        if(redirect_server == nullptr)
        {
            redirect_server = std::make_shared<Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer>();
        }
        return redirect_server;
    }

    if(child_yang_name == "whitelist")
    {
        if(whitelist == nullptr)
        {
            whitelist = std::make_shared<Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist>();
        }
        return whitelist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Domain::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(blacklist != nullptr)
    {
        children["blacklist"] = blacklist;
    }

    if(redirect_server != nullptr)
    {
        children["redirect-server"] = redirect_server;
    }

    if(whitelist != nullptr)
    {
        children["whitelist"] = whitelist;
    }

    return children;
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alert")
    {
        alert = value;
        alert.value_namespace = name_space;
        alert.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "alert")
    {
        alert.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "blacklist" || name == "redirect-server" || name == "whitelist" || name == "id" || name == "alert")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::Blacklist()
    :
    parameter_map(std::make_shared<Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap>())
{
    parameter_map->parent = this;

    yang_name = "blacklist"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::~Blacklist()
{
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::has_data() const
{
    return (parameter_map !=  nullptr && parameter_map->has_data());
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::has_operation() const
{
    return is_set(yfilter)
	|| (parameter_map !=  nullptr && parameter_map->has_operation());
}

std::string Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "blacklist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameter-map")
    {
        if(parameter_map == nullptr)
        {
            parameter_map = std::make_shared<Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap>();
        }
        return parameter_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(parameter_map != nullptr)
    {
        children["parameter-map"] = parameter_map;
    }

    return children;
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameter-map")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap::ParameterMap()
    :
    regex{YType::str, "regex"}
{

    yang_name = "parameter-map"; yang_parent_name = "blacklist"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap::~ParameterMap()
{
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap::has_data() const
{
    return regex.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(regex.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameter-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (regex.is_set || is_set(regex.yfilter)) leaf_name_data.push_back(regex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "regex")
    {
        regex = value;
        regex.value_namespace = name_space;
        regex.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "regex")
    {
        regex.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Blacklist::ParameterMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regex")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer::RedirectServer()
    :
    external{YType::str, "external"},
    local_block_server{YType::str, "local-block-server"}
{

    yang_name = "redirect-server"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer::~RedirectServer()
{
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer::has_data() const
{
    return external.is_set
	|| local_block_server.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(local_block_server.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (local_block_server.is_set || is_set(local_block_server.yfilter)) leaf_name_data.push_back(local_block_server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-block-server")
    {
        local_block_server = value;
        local_block_server.value_namespace = name_space;
        local_block_server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "local-block-server")
    {
        local_block_server.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::RedirectServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "local-block-server")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::Whitelist()
    :
    parameter_map(std::make_shared<Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap>())
{
    parameter_map->parent = this;

    yang_name = "whitelist"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::~Whitelist()
{
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::has_data() const
{
    return (parameter_map !=  nullptr && parameter_map->has_data());
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::has_operation() const
{
    return is_set(yfilter)
	|| (parameter_map !=  nullptr && parameter_map->has_operation());
}

std::string Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "whitelist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameter-map")
    {
        if(parameter_map == nullptr)
        {
            parameter_map = std::make_shared<Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap>();
        }
        return parameter_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(parameter_map != nullptr)
    {
        children["parameter-map"] = parameter_map;
    }

    return children;
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameter-map")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap::ParameterMap()
    :
    regex{YType::str, "regex"}
{

    yang_name = "parameter-map"; yang_parent_name = "whitelist"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap::~ParameterMap()
{
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap::has_data() const
{
    return regex.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(regex.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameter-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (regex.is_set || is_set(regex.yfilter)) leaf_name_data.push_back(regex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "regex")
    {
        regex = value;
        regex.value_namespace = name_space;
        regex.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "regex")
    {
        regex.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Domain::Profile::Whitelist::ParameterMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regex")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Sourcedb::Sourcedb()
    :
    id{YType::str, "id"}
    	,
    logging(std::make_shared<Native::UtdSt::Utd::WebFilter::Sourcedb::Logging>())
{
    logging->parent = this;

    yang_name = "sourcedb"; yang_parent_name = "web-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::WebFilter::Sourcedb::~Sourcedb()
{
}

bool Native::UtdSt::Utd::WebFilter::Sourcedb::has_data() const
{
    return id.is_set
	|| (logging !=  nullptr && logging->has_data());
}

bool Native::UtdSt::Utd::WebFilter::Sourcedb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Native::UtdSt::Utd::WebFilter::Sourcedb::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/web-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::WebFilter::Sourcedb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourcedb" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Sourcedb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Sourcedb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::UtdSt::Utd::WebFilter::Sourcedb::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Sourcedb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    return children;
}

void Native::UtdSt::Utd::WebFilter::Sourcedb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Sourcedb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Sourcedb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "id")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::Logging()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "logging"; yang_parent_name = "sourcedb"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::~Logging()
{
}

bool Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::has_data() const
{
    return level.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Url()
{

    yang_name = "url"; yang_parent_name = "web-filter"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::WebFilter::Url::~Url()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Native::UtdSt::Utd::WebFilter::Url::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Url::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/web-filter/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::WebFilter::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::UtdSt::Utd::WebFilter::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Profile()
    :
    id{YType::str, "id"},
    alert{YType::enumeration, "alert"}
    	,
    blacklist(nullptr) // presence node
	,categories(std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Categories>())
	,block(std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Block>())
	,log(std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Log>())
	,reputation(nullptr) // presence node
	,sourcedb(std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb>())
	,whitelist(nullptr) // presence node
{
    categories->parent = this;
    block->parent = this;
    log->parent = this;
    sourcedb->parent = this;

    yang_name = "profile"; yang_parent_name = "url"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::~Profile()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::has_data() const
{
    for (auto const & leaf : alert.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set
	|| (blacklist !=  nullptr && blacklist->has_data())
	|| (categories !=  nullptr && categories->has_data())
	|| (block !=  nullptr && block->has_data())
	|| (log !=  nullptr && log->has_data())
	|| (reputation !=  nullptr && reputation->has_data())
	|| (sourcedb !=  nullptr && sourcedb->has_data())
	|| (whitelist !=  nullptr && whitelist->has_data());
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::has_operation() const
{
    for (auto const & leaf : alert.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(alert.yfilter)
	|| (blacklist !=  nullptr && blacklist->has_operation())
	|| (categories !=  nullptr && categories->has_operation())
	|| (block !=  nullptr && block->has_operation())
	|| (log !=  nullptr && log->has_operation())
	|| (reputation !=  nullptr && reputation->has_operation())
	|| (sourcedb !=  nullptr && sourcedb->has_operation())
	|| (whitelist !=  nullptr && whitelist->has_operation());
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/web-filter/url/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    auto alert_name_datas = alert.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), alert_name_datas.begin(), alert_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "blacklist")
    {
        if(blacklist == nullptr)
        {
            blacklist = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist>();
        }
        return blacklist;
    }

    if(child_yang_name == "categories")
    {
        if(categories == nullptr)
        {
            categories = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Categories>();
        }
        return categories;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Block>();
        }
        return block;
    }

    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Log>();
        }
        return log;
    }

    if(child_yang_name == "reputation")
    {
        if(reputation == nullptr)
        {
            reputation = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation>();
        }
        return reputation;
    }

    if(child_yang_name == "sourcedb")
    {
        if(sourcedb == nullptr)
        {
            sourcedb = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb>();
        }
        return sourcedb;
    }

    if(child_yang_name == "whitelist")
    {
        if(whitelist == nullptr)
        {
            whitelist = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist>();
        }
        return whitelist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(blacklist != nullptr)
    {
        children["blacklist"] = blacklist;
    }

    if(categories != nullptr)
    {
        children["categories"] = categories;
    }

    if(block != nullptr)
    {
        children["block"] = block;
    }

    if(log != nullptr)
    {
        children["log"] = log;
    }

    if(reputation != nullptr)
    {
        children["reputation"] = reputation;
    }

    if(sourcedb != nullptr)
    {
        children["sourcedb"] = sourcedb;
    }

    if(whitelist != nullptr)
    {
        children["whitelist"] = whitelist;
    }

    return children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alert")
    {
        alert.append(value);
    }
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "alert")
    {
        alert.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "blacklist" || name == "categories" || name == "block" || name == "log" || name == "reputation" || name == "sourcedb" || name == "whitelist" || name == "id" || name == "alert")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::Blacklist()
    :
    parameter_map(std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap>())
{
    parameter_map->parent = this;

    yang_name = "blacklist"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::~Blacklist()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::has_data() const
{
    return (parameter_map !=  nullptr && parameter_map->has_data());
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::has_operation() const
{
    return is_set(yfilter)
	|| (parameter_map !=  nullptr && parameter_map->has_operation());
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "blacklist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameter-map")
    {
        if(parameter_map == nullptr)
        {
            parameter_map = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap>();
        }
        return parameter_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(parameter_map != nullptr)
    {
        children["parameter-map"] = parameter_map;
    }

    return children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameter-map")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap::ParameterMap()
    :
    regex{YType::str, "regex"}
{

    yang_name = "parameter-map"; yang_parent_name = "blacklist"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap::~ParameterMap()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap::has_data() const
{
    return regex.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(regex.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameter-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (regex.is_set || is_set(regex.yfilter)) leaf_name_data.push_back(regex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "regex")
    {
        regex = value;
        regex.value_namespace = name_space;
        regex.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "regex")
    {
        regex.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Blacklist::ParameterMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regex")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Categories()
    :
    allow(nullptr) // presence node
	,block(nullptr) // presence node
{

    yang_name = "categories"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::~Categories()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::has_data() const
{
    return (allow !=  nullptr && allow->has_data())
	|| (block !=  nullptr && block->has_data());
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::has_operation() const
{
    return is_set(yfilter)
	|| (allow !=  nullptr && allow->has_operation())
	|| (block !=  nullptr && block->has_operation());
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "categories";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allow")
    {
        if(allow == nullptr)
        {
            allow = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow>();
        }
        return allow;
    }

    if(child_yang_name == "block")
    {
        if(block == nullptr)
        {
            block = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block>();
        }
        return block;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allow != nullptr)
    {
        children["allow"] = allow;
    }

    if(block != nullptr)
    {
        children["block"] = block;
    }

    return children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow" || name == "block")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Allow()
{

    yang_name = "allow"; yang_parent_name = "categories"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::~Allow()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::has_data() const
{
    for (std::size_t index=0; index<category.size(); index++)
    {
        if(category[index]->has_data())
            return true;
    }
    return false;
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::has_operation() const
{
    for (std::size_t index=0; index<category.size(); index++)
    {
        if(category[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "category")
    {
        for(auto const & c : category)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category>();
        c->parent = this;
        category.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : category)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "category")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category::Category()
    :
    name{YType::enumeration, "name"}
{

    yang_name = "category"; yang_parent_name = "allow"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category::~Category()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category::has_data() const
{
    return name.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "category" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Allow::Category::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Block()
{

    yang_name = "block"; yang_parent_name = "categories"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::~Block()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::has_data() const
{
    for (std::size_t index=0; index<category.size(); index++)
    {
        if(category[index]->has_data())
            return true;
    }
    return false;
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::has_operation() const
{
    for (std::size_t index=0; index<category.size(); index++)
    {
        if(category[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "category")
    {
        for(auto const & c : category)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category>();
        c->parent = this;
        category.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : category)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "category")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category::Category()
    :
    name{YType::enumeration, "name"}
{

    yang_name = "category"; yang_parent_name = "block"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category::~Category()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category::has_data() const
{
    return name.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "category" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Categories::Block::Category::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Block::Block()
    :
    local_server{YType::str, "local-server"},
    page_profile{YType::str, "page-profile"}
{

    yang_name = "block"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Block::~Block()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Block::has_data() const
{
    return local_server.is_set
	|| page_profile.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Block::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_server.yfilter)
	|| ydk::is_set(page_profile.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Block::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Block::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_server.is_set || is_set(local_server.yfilter)) leaf_name_data.push_back(local_server.get_name_leafdata());
    if (page_profile.is_set || is_set(page_profile.yfilter)) leaf_name_data.push_back(page_profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Block::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Block::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Block::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-server")
    {
        local_server = value;
        local_server.value_namespace = name_space;
        local_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "page-profile")
    {
        page_profile = value;
        page_profile.value_namespace = name_space;
        page_profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Block::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-server")
    {
        local_server.yfilter = yfilter;
    }
    if(value_path == "page-profile")
    {
        page_profile.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Block::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-server" || name == "page-profile")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Log::Log()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "log"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Log::~Log()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Log::has_data() const
{
    return level.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::Reputation()
    :
    block_threshold{YType::enumeration, "block-threshold"}
{

    yang_name = "reputation"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::~Reputation()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::has_data() const
{
    return block_threshold.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(block_threshold.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reputation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block_threshold.is_set || is_set(block_threshold.yfilter)) leaf_name_data.push_back(block_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "block-threshold")
    {
        block_threshold = value;
        block_threshold.value_namespace = name_space;
        block_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "block-threshold")
    {
        block_threshold.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "block-threshold")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Sourcedb()
    :
    fail(std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail>())
{
    fail->parent = this;

    yang_name = "sourcedb"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::~Sourcedb()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::has_data() const
{
    return (fail !=  nullptr && fail->has_data());
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::has_operation() const
{
    return is_set(yfilter)
	|| (fail !=  nullptr && fail->has_operation());
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sourcedb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fail")
    {
        if(fail == nullptr)
        {
            fail = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail>();
        }
        return fail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fail != nullptr)
    {
        children["fail"] = fail;
    }

    return children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fail")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail::Fail()
    :
    close{YType::empty, "close"}
{

    yang_name = "fail"; yang_parent_name = "sourcedb"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail::~Fail()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail::has_data() const
{
    return close.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(close.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (close.is_set || is_set(close.yfilter)) leaf_name_data.push_back(close.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "close")
    {
        close = value;
        close.value_namespace = name_space;
        close.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "close")
    {
        close.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Sourcedb::Fail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "close")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::Whitelist()
    :
    parameter_map(std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap>())
{
    parameter_map->parent = this;

    yang_name = "whitelist"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::~Whitelist()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::has_data() const
{
    return (parameter_map !=  nullptr && parameter_map->has_data());
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::has_operation() const
{
    return is_set(yfilter)
	|| (parameter_map !=  nullptr && parameter_map->has_operation());
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "whitelist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameter-map")
    {
        if(parameter_map == nullptr)
        {
            parameter_map = std::make_shared<Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap>();
        }
        return parameter_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(parameter_map != nullptr)
    {
        children["parameter-map"] = parameter_map;
    }

    return children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameter-map")
        return true;
    return false;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap::ParameterMap()
    :
    regex{YType::str, "regex"}
{

    yang_name = "parameter-map"; yang_parent_name = "whitelist"; is_top_level_class = false; has_list_ancestor = true;
}

Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap::~ParameterMap()
{
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap::has_data() const
{
    return regex.is_set;
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(regex.yfilter);
}

std::string Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameter-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (regex.is_set || is_set(regex.yfilter)) leaf_name_data.push_back(regex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "regex")
    {
        regex = value;
        regex.value_namespace = name_space;
        regex.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "regex")
    {
        regex.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::WebFilter::Url::Profile::Whitelist::ParameterMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "regex")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Engine()
    :
    advanced(std::make_shared<Native::UtdSt::Utd::Engine::Advanced>())
	,standard(nullptr) // presence node
{
    advanced->parent = this;

    yang_name = "engine"; yang_parent_name = "utd"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::Engine::~Engine()
{
}

bool Native::UtdSt::Utd::Engine::has_data() const
{
    return (advanced !=  nullptr && advanced->has_data())
	|| (standard !=  nullptr && standard->has_data());
}

bool Native::UtdSt::Utd::Engine::has_operation() const
{
    return is_set(yfilter)
	|| (advanced !=  nullptr && advanced->has_operation())
	|| (standard !=  nullptr && standard->has_operation());
}

std::string Native::UtdSt::Utd::Engine::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "engine";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::Engine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advanced")
    {
        if(advanced == nullptr)
        {
            advanced = std::make_shared<Native::UtdSt::Utd::Engine::Advanced>();
        }
        return advanced;
    }

    if(child_yang_name == "standard")
    {
        if(standard == nullptr)
        {
            standard = std::make_shared<Native::UtdSt::Utd::Engine::Standard>();
        }
        return standard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::Engine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advanced != nullptr)
    {
        children["advanced"] = advanced;
    }

    if(standard != nullptr)
    {
        children["standard"] = standard;
    }

    return children;
}

void Native::UtdSt::Utd::Engine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::Engine::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::Engine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advanced" || name == "standard")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Advanced::Advanced()
    :
    threat(nullptr) // presence node
{

    yang_name = "advanced"; yang_parent_name = "engine"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::Engine::Advanced::~Advanced()
{
}

bool Native::UtdSt::Utd::Engine::Advanced::has_data() const
{
    return (threat !=  nullptr && threat->has_data());
}

bool Native::UtdSt::Utd::Engine::Advanced::has_operation() const
{
    return is_set(yfilter)
	|| (threat !=  nullptr && threat->has_operation());
}

std::string Native::UtdSt::Utd::Engine::Advanced::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Advanced::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advanced";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Advanced::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::Engine::Advanced::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threat")
    {
        if(threat == nullptr)
        {
            threat = std::make_shared<Native::UtdSt::Utd::Engine::Advanced::Threat>();
        }
        return threat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::Engine::Advanced::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threat != nullptr)
    {
        children["threat"] = threat;
    }

    return children;
}

void Native::UtdSt::Utd::Engine::Advanced::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::Engine::Advanced::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::Engine::Advanced::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threat")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Advanced::Threat::Threat()
    :
    detection{YType::empty, "detection"}
{

    yang_name = "threat"; yang_parent_name = "advanced"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::Engine::Advanced::Threat::~Threat()
{
}

bool Native::UtdSt::Utd::Engine::Advanced::Threat::has_data() const
{
    return detection.is_set;
}

bool Native::UtdSt::Utd::Engine::Advanced::Threat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(detection.yfilter);
}

std::string Native::UtdSt::Utd::Engine::Advanced::Threat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/advanced/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Advanced::Threat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Advanced::Threat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection.is_set || is_set(detection.yfilter)) leaf_name_data.push_back(detection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::Engine::Advanced::Threat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::Engine::Advanced::Threat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdSt::Utd::Engine::Advanced::Threat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "detection")
    {
        detection = value;
        detection.value_namespace = name_space;
        detection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::Engine::Advanced::Threat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "detection")
    {
        detection.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::Engine::Advanced::Threat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::Standard()
    :
    logging(std::make_shared<Native::UtdSt::Utd::Engine::Standard::Logging>())
	,threat_inspection(nullptr) // presence node
	,web_filter(nullptr) // presence node
{
    logging->parent = this;

    yang_name = "standard"; yang_parent_name = "engine"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::Engine::Standard::~Standard()
{
}

bool Native::UtdSt::Utd::Engine::Standard::has_data() const
{
    return (logging !=  nullptr && logging->has_data())
	|| (threat_inspection !=  nullptr && threat_inspection->has_data())
	|| (web_filter !=  nullptr && web_filter->has_data());
}

bool Native::UtdSt::Utd::Engine::Standard::has_operation() const
{
    return is_set(yfilter)
	|| (logging !=  nullptr && logging->has_operation())
	|| (threat_inspection !=  nullptr && threat_inspection->has_operation())
	|| (web_filter !=  nullptr && web_filter->has_operation());
}

std::string Native::UtdSt::Utd::Engine::Standard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::Engine::Standard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::UtdSt::Utd::Engine::Standard::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "threat-inspection")
    {
        if(threat_inspection == nullptr)
        {
            threat_inspection = std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection>();
        }
        return threat_inspection;
    }

    if(child_yang_name == "web-filter")
    {
        if(web_filter == nullptr)
        {
            web_filter = std::make_shared<Native::UtdSt::Utd::Engine::Standard::WebFilter>();
        }
        return web_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::Engine::Standard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(threat_inspection != nullptr)
    {
        children["threat-inspection"] = threat_inspection;
    }

    if(web_filter != nullptr)
    {
        children["web-filter"] = web_filter;
    }

    return children;
}

void Native::UtdSt::Utd::Engine::Standard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::Engine::Standard::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::Engine::Standard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "threat-inspection" || name == "web-filter")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::Logging::Logging()
    :
    syslog{YType::empty, "syslog"}
{

    yang_name = "logging"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::Engine::Standard::Logging::~Logging()
{
}

bool Native::UtdSt::Utd::Engine::Standard::Logging::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return syslog.is_set;
}

bool Native::UtdSt::Utd::Engine::Standard::Logging::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(syslog.yfilter);
}

std::string Native::UtdSt::Utd::Engine::Standard::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::Engine::Standard::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::UtdSt::Utd::Engine::Standard::Logging::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::Engine::Standard::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : host)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::UtdSt::Utd::Engine::Standard::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::Engine::Standard::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::Engine::Standard::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "syslog")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::Logging::Host::Host()
    :
    name{YType::str, "name"}
{

    yang_name = "host"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::Engine::Standard::Logging::Host::~Host()
{
}

bool Native::UtdSt::Utd::Engine::Standard::Logging::Host::has_data() const
{
    return name.is_set;
}

bool Native::UtdSt::Utd::Engine::Standard::Logging::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::UtdSt::Utd::Engine::Standard::Logging::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::Logging::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::Logging::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::Engine::Standard::Logging::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::Engine::Standard::Logging::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdSt::Utd::Engine::Standard::Logging::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::Engine::Standard::Logging::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::Engine::Standard::Logging::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::ThreatInspection()
    :
    threat{YType::enumeration, "threat"},
    policy{YType::enumeration, "policy"},
    whitelist{YType::empty, "whitelist"}
    	,
    signature(std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature>())
	,logging(std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging>())
{
    signature->parent = this;
    logging->parent = this;

    yang_name = "threat-inspection"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::~ThreatInspection()
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::has_data() const
{
    return threat.is_set
	|| policy.is_set
	|| whitelist.is_set
	|| (signature !=  nullptr && signature->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threat.yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(whitelist.yfilter)
	|| (signature !=  nullptr && signature->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threat-inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::ThreatInspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threat.is_set || is_set(threat.yfilter)) leaf_name_data.push_back(threat.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (whitelist.is_set || is_set(whitelist.yfilter)) leaf_name_data.push_back(whitelist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signature")
    {
        if(signature == nullptr)
        {
            signature = std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature>();
        }
        return signature;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging>();
        }
        return logging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(signature != nullptr)
    {
        children["signature"] = signature;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    return children;
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threat")
    {
        threat = value;
        threat.value_namespace = name_space;
        threat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "whitelist")
    {
        whitelist = value;
        whitelist.value_namespace = name_space;
        whitelist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threat")
    {
        threat.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "whitelist")
    {
        whitelist.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signature" || name == "logging" || name == "threat" || name == "policy" || name == "whitelist")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Signature()
    :
    update(std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update>())
{
    update->parent = this;

    yang_name = "signature"; yang_parent_name = "threat-inspection"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::~Signature()
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::has_data() const
{
    return (update !=  nullptr && update->has_data());
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::has_operation() const
{
    return is_set(yfilter)
	|| (update !=  nullptr && update->has_operation());
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/threat-inspection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update>();
        }
        return update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(update != nullptr)
    {
        children["update"] = update;
    }

    return children;
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Update()
    :
    occur_at(std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt>())
	,server(std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server>())
{
    occur_at->parent = this;
    server->parent = this;

    yang_name = "update"; yang_parent_name = "signature"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::~Update()
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::has_data() const
{
    return (occur_at !=  nullptr && occur_at->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::has_operation() const
{
    return is_set(yfilter)
	|| (occur_at !=  nullptr && occur_at->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/threat-inspection/signature/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "occur-at")
    {
        if(occur_at == nullptr)
        {
            occur_at = std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt>();
        }
        return occur_at;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(occur_at != nullptr)
    {
        children["occur-at"] = occur_at;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "occur-at" || name == "server")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::OccurAt()
    :
    daily{YType::empty, "daily"},
    monthly{YType::str, "monthly"},
    weekly{YType::str, "weekly"},
    hours{YType::uint8, "hours"},
    minutes{YType::uint8, "minutes"}
{

    yang_name = "occur-at"; yang_parent_name = "update"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::~OccurAt()
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::has_data() const
{
    return daily.is_set
	|| monthly.is_set
	|| weekly.is_set
	|| hours.is_set
	|| minutes.is_set;
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(daily.yfilter)
	|| ydk::is_set(monthly.yfilter)
	|| ydk::is_set(weekly.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter);
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/threat-inspection/signature/update/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "occur-at";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (daily.is_set || is_set(daily.yfilter)) leaf_name_data.push_back(daily.get_name_leafdata());
    if (monthly.is_set || is_set(monthly.yfilter)) leaf_name_data.push_back(monthly.get_name_leafdata());
    if (weekly.is_set || is_set(weekly.yfilter)) leaf_name_data.push_back(weekly.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "daily")
    {
        daily = value;
        daily.value_namespace = name_space;
        daily.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monthly")
    {
        monthly = value;
        monthly.value_namespace = name_space;
        monthly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weekly")
    {
        weekly = value;
        weekly.value_namespace = name_space;
        weekly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "daily")
    {
        daily.yfilter = yfilter;
    }
    if(value_path == "monthly")
    {
        monthly.yfilter = yfilter;
    }
    if(value_path == "weekly")
    {
        weekly.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::OccurAt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "monthly" || name == "weekly" || name == "hours" || name == "minutes")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Server()
    :
    cisco(std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco>())
	,url(std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url>())
{
    cisco->parent = this;
    url->parent = this;

    yang_name = "server"; yang_parent_name = "update"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::~Server()
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::has_data() const
{
    return (cisco !=  nullptr && cisco->has_data())
	|| (url !=  nullptr && url->has_data());
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::has_operation() const
{
    return is_set(yfilter)
	|| (cisco !=  nullptr && cisco->has_operation())
	|| (url !=  nullptr && url->has_operation());
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/threat-inspection/signature/update/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco")
    {
        if(cisco == nullptr)
        {
            cisco = std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco>();
        }
        return cisco;
    }

    if(child_yang_name == "url")
    {
        if(url == nullptr)
        {
            url = std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url>();
        }
        return url;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cisco != nullptr)
    {
        children["cisco"] = cisco;
    }

    if(url != nullptr)
    {
        children["url"] = url;
    }

    return children;
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco" || name == "url")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::Cisco()
    :
    username{YType::str, "username"},
    password{YType::str, "password"}
{

    yang_name = "cisco"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::~Cisco()
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::has_data() const
{
    return username.is_set
	|| password.is_set;
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/threat-inspection/signature/update/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Cisco::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username" || name == "password")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::Url()
    :
    name{YType::str, "name"}
    	,
    all(std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All>())
{
    all->parent = this;

    yang_name = "url"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::~Url()
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::has_data() const
{
    return name.is_set
	|| (all !=  nullptr && all->has_data());
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/threat-inspection/signature/update/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "url";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "name")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::All()
    :
    name{YType::str, "name"},
    username{YType::str, "username"},
    password{YType::str, "password"}
{

    yang_name = "all"; yang_parent_name = "url"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::~All()
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::has_data() const
{
    return name.is_set
	|| username.is_set
	|| password.is_set;
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/threat-inspection/signature/update/server/url/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Signature::Update::Server::Url::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "username" || name == "password")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::Logging()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "logging"; yang_parent_name = "threat-inspection"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::~Logging()
{
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::has_data() const
{
    return level.is_set;
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/threat-inspection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::UtdSt::Utd::Engine::Standard::WebFilter::WebFilter()
    :
    domain_profile{YType::str, "domain-profile"},
    sourcedb{YType::str, "sourcedb"},
    url_profile{YType::str, "url-profile"}
{

    yang_name = "web-filter"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::Engine::Standard::WebFilter::~WebFilter()
{
}

bool Native::UtdSt::Utd::Engine::Standard::WebFilter::has_data() const
{
    return domain_profile.is_set
	|| sourcedb.is_set
	|| url_profile.is_set;
}

bool Native::UtdSt::Utd::Engine::Standard::WebFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_profile.yfilter)
	|| ydk::is_set(sourcedb.yfilter)
	|| ydk::is_set(url_profile.yfilter);
}

std::string Native::UtdSt::Utd::Engine::Standard::WebFilter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/engine/standard/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::Engine::Standard::WebFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::Engine::Standard::WebFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_profile.is_set || is_set(domain_profile.yfilter)) leaf_name_data.push_back(domain_profile.get_name_leafdata());
    if (sourcedb.is_set || is_set(sourcedb.yfilter)) leaf_name_data.push_back(sourcedb.get_name_leafdata());
    if (url_profile.is_set || is_set(url_profile.yfilter)) leaf_name_data.push_back(url_profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::Engine::Standard::WebFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::Engine::Standard::WebFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdSt::Utd::Engine::Standard::WebFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-profile")
    {
        domain_profile = value;
        domain_profile.value_namespace = name_space;
        domain_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourcedb")
    {
        sourcedb = value;
        sourcedb.value_namespace = name_space;
        sourcedb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url-profile")
    {
        url_profile = value;
        url_profile.value_namespace = name_space;
        url_profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::Engine::Standard::WebFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-profile")
    {
        domain_profile.yfilter = yfilter;
    }
    if(value_path == "sourcedb")
    {
        sourcedb.yfilter = yfilter;
    }
    if(value_path == "url-profile")
    {
        url_profile.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::Engine::Standard::WebFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-profile" || name == "sourcedb" || name == "url-profile")
        return true;
    return false;
}

Native::UtdSt::Utd::ThreatInspection::ThreatInspection()
    :
    whitelist(nullptr) // presence node
{

    yang_name = "threat-inspection"; yang_parent_name = "utd"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::ThreatInspection::~ThreatInspection()
{
}

bool Native::UtdSt::Utd::ThreatInspection::has_data() const
{
    return (whitelist !=  nullptr && whitelist->has_data());
}

bool Native::UtdSt::Utd::ThreatInspection::has_operation() const
{
    return is_set(yfilter)
	|| (whitelist !=  nullptr && whitelist->has_operation());
}

std::string Native::UtdSt::Utd::ThreatInspection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::ThreatInspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threat-inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::ThreatInspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::ThreatInspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "whitelist")
    {
        if(whitelist == nullptr)
        {
            whitelist = std::make_shared<Native::UtdSt::Utd::ThreatInspection::Whitelist>();
        }
        return whitelist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::ThreatInspection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(whitelist != nullptr)
    {
        children["whitelist"] = whitelist;
    }

    return children;
}

void Native::UtdSt::Utd::ThreatInspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::ThreatInspection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::ThreatInspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "whitelist")
        return true;
    return false;
}

Native::UtdSt::Utd::ThreatInspection::Whitelist::Whitelist()
{

    yang_name = "whitelist"; yang_parent_name = "threat-inspection"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::ThreatInspection::Whitelist::~Whitelist()
{
}

bool Native::UtdSt::Utd::ThreatInspection::Whitelist::has_data() const
{
    for (std::size_t index=0; index<signature.size(); index++)
    {
        if(signature[index]->has_data())
            return true;
    }
    return false;
}

bool Native::UtdSt::Utd::ThreatInspection::Whitelist::has_operation() const
{
    for (std::size_t index=0; index<signature.size(); index++)
    {
        if(signature[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::UtdSt::Utd::ThreatInspection::Whitelist::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/threat-inspection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::ThreatInspection::Whitelist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "whitelist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::ThreatInspection::Whitelist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::ThreatInspection::Whitelist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signature")
    {
        for(auto const & c : signature)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::UtdSt::Utd::ThreatInspection::Whitelist::Signature>();
        c->parent = this;
        signature.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::ThreatInspection::Whitelist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : signature)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::UtdSt::Utd::ThreatInspection::Whitelist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::UtdSt::Utd::ThreatInspection::Whitelist::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::UtdSt::Utd::ThreatInspection::Whitelist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signature")
        return true;
    return false;
}

Native::UtdSt::Utd::ThreatInspection::Whitelist::Signature::Signature()
    :
    id{YType::uint32, "id"},
    comment{YType::str, "comment"}
{

    yang_name = "signature"; yang_parent_name = "whitelist"; is_top_level_class = false; has_list_ancestor = false;
}

Native::UtdSt::Utd::ThreatInspection::Whitelist::Signature::~Signature()
{
}

bool Native::UtdSt::Utd::ThreatInspection::Whitelist::Signature::has_data() const
{
    return id.is_set
	|| comment.is_set;
}

bool Native::UtdSt::Utd::ThreatInspection::Whitelist::Signature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(comment.yfilter);
}

std::string Native::UtdSt::Utd::ThreatInspection::Whitelist::Signature::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-utd:utd-st/utd/threat-inspection/whitelist/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::UtdSt::Utd::ThreatInspection::Whitelist::Signature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signature" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::UtdSt::Utd::ThreatInspection::Whitelist::Signature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (comment.is_set || is_set(comment.yfilter)) leaf_name_data.push_back(comment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::UtdSt::Utd::ThreatInspection::Whitelist::Signature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::UtdSt::Utd::ThreatInspection::Whitelist::Signature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::UtdSt::Utd::ThreatInspection::Whitelist::Signature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "comment")
    {
        comment = value;
        comment.value_namespace = name_space;
        comment.value_namespace_prefix = name_space_prefix;
    }
}

void Native::UtdSt::Utd::ThreatInspection::Whitelist::Signature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "comment")
    {
        comment.yfilter = yfilter;
    }
}

bool Native::UtdSt::Utd::ThreatInspection::Whitelist::Signature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "comment")
        return true;
    return false;
}

Native::Voice::Voice()
{

    yang_name = "voice"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Voice::~Voice()
{
}

bool Native::Voice::has_data() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Voice::has_operation() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Voice::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Voice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-voice:voice";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Voice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Voice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service")
    {
        for(auto const & c : service)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Voice::Service>();
        c->parent = this;
        service.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Voice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : service)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Voice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Voice::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Voice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service")
        return true;
    return false;
}

Native::Voice::Service::Service()
    :
    type{YType::enumeration, "type"}
    	,
    fax(std::make_shared<Native::Voice::Service::Fax>())
{
    fax->parent = this;

    yang_name = "service"; yang_parent_name = "voice"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Voice::Service::~Service()
{
}

bool Native::Voice::Service::has_data() const
{
    return type.is_set
	|| (fax !=  nullptr && fax->has_data());
}

bool Native::Voice::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (fax !=  nullptr && fax->has_operation());
}

std::string Native::Voice::Service::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-voice:voice/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Voice::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service" <<"[type='" <<type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Voice::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Voice::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fax")
    {
        if(fax == nullptr)
        {
            fax = std::make_shared<Native::Voice::Service::Fax>();
        }
        return fax;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Voice::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fax != nullptr)
    {
        children["fax"] = fax;
    }

    return children;
}

void Native::Voice::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Voice::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Voice::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fax" || name == "type")
        return true;
    return false;
}

Native::Voice::Service::Fax::Fax()
    :
    protocol{YType::enumeration, "protocol"},
    fallback{YType::enumeration, "fallback"},
    codec{YType::enumeration, "codec"},
    ls_redundancy{YType::uint8, "ls-redundancy"},
    hs_redundancy{YType::uint8, "hs-redundancy"},
    version{YType::enumeration, "version"}
{

    yang_name = "fax"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Voice::Service::Fax::~Fax()
{
}

bool Native::Voice::Service::Fax::has_data() const
{
    return protocol.is_set
	|| fallback.is_set
	|| codec.is_set
	|| ls_redundancy.is_set
	|| hs_redundancy.is_set
	|| version.is_set;
}

bool Native::Voice::Service::Fax::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(codec.yfilter)
	|| ydk::is_set(ls_redundancy.yfilter)
	|| ydk::is_set(hs_redundancy.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Voice::Service::Fax::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fax";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Voice::Service::Fax::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (codec.is_set || is_set(codec.yfilter)) leaf_name_data.push_back(codec.get_name_leafdata());
    if (ls_redundancy.is_set || is_set(ls_redundancy.yfilter)) leaf_name_data.push_back(ls_redundancy.get_name_leafdata());
    if (hs_redundancy.is_set || is_set(hs_redundancy.yfilter)) leaf_name_data.push_back(hs_redundancy.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Voice::Service::Fax::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Voice::Service::Fax::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Voice::Service::Fax::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback")
    {
        fallback = value;
        fallback.value_namespace = name_space;
        fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "codec")
    {
        codec = value;
        codec.value_namespace = name_space;
        codec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-redundancy")
    {
        ls_redundancy = value;
        ls_redundancy.value_namespace = name_space;
        ls_redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hs-redundancy")
    {
        hs_redundancy = value;
        hs_redundancy.value_namespace = name_space;
        hs_redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Voice::Service::Fax::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
    if(value_path == "codec")
    {
        codec.yfilter = yfilter;
    }
    if(value_path == "ls-redundancy")
    {
        ls_redundancy.yfilter = yfilter;
    }
    if(value_path == "hs-redundancy")
    {
        hs_redundancy.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Voice::Service::Fax::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "fallback" || name == "codec" || name == "ls-redundancy" || name == "hs-redundancy" || name == "version")
        return true;
    return false;
}

Native::VoiceCard::VoiceCard()
    :
    slot{YType::uint8, "slot"}
{

    yang_name = "voice-card"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::VoiceCard::~VoiceCard()
{
}

bool Native::VoiceCard::has_data() const
{
    return slot.is_set;
}

bool Native::VoiceCard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slot.yfilter);
}

std::string Native::VoiceCard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::VoiceCard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-voice:voice-card" <<"[slot='" <<slot <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::VoiceCard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::VoiceCard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::VoiceCard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::VoiceCard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
}

void Native::VoiceCard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
}

bool Native::VoiceCard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slot")
        return true;
    return false;
}

Native::Vpdn::Vpdn()
    :
    authen_before_forward{YType::empty, "authen-before-forward"},
    enable{YType::empty, "enable"},
    search_order{YType::enumeration, "search-order"}
{

    yang_name = "vpdn"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vpdn::~Vpdn()
{
}

bool Native::Vpdn::has_data() const
{
    for (auto const & leaf : search_order.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return authen_before_forward.is_set
	|| enable.is_set;
}

bool Native::Vpdn::has_operation() const
{
    for (auto const & leaf : search_order.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(authen_before_forward.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(search_order.yfilter);
}

std::string Native::Vpdn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vpdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vpdn:vpdn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vpdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_before_forward.is_set || is_set(authen_before_forward.yfilter)) leaf_name_data.push_back(authen_before_forward.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    auto search_order_name_datas = search_order.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), search_order_name_datas.begin(), search_order_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vpdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vpdn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Vpdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authen-before-forward")
    {
        authen_before_forward = value;
        authen_before_forward.value_namespace = name_space;
        authen_before_forward.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "search-order")
    {
        search_order.append(value);
    }
}

void Native::Vpdn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authen-before-forward")
    {
        authen_before_forward.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "search-order")
    {
        search_order.yfilter = yfilter;
    }
}

bool Native::Vpdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authen-before-forward" || name == "enable" || name == "search-order")
        return true;
    return false;
}

const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Domain::Profile::Alert::all {0, "all"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Domain::Profile::Alert::blacklist {1, "blacklist"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Domain::Profile::Alert::whitelist {2, "whitelist"};

const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::Level::debug {0, "debug"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::Level::error {1, "error"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::Level::info {2, "info"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::Level::trace {3, "trace"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Sourcedb::Logging::Level::warning {4, "warning"};

const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Alert::all {0, "all"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Alert::blacklist {1, "blacklist"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Alert::categories_reputation {2, "categories-reputation"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Alert::whitelist {3, "whitelist"};

const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Log::Level::detailed {0, "detailed"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Log::Level::error {1, "error"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Log::Level::info {2, "info"};

const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::BlockThreshold::high_risk {0, "high-risk"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::BlockThreshold::low_risk {1, "low-risk"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::BlockThreshold::moderate_risk {2, "moderate-risk"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::BlockThreshold::suspicious {3, "suspicious"};
const Enum::YLeaf Native::UtdSt::Utd::WebFilter::Url::Profile::Reputation::BlockThreshold::trustworthy {4, "trustworthy"};

const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Threat::detection {0, "detection"};
const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Threat::protection {1, "protection"};

const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Policy::balanced {0, "balanced"};
const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Policy::connectivity {1, "connectivity"};
const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Policy::security {2, "security"};

const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::Level::emerg {0, "emerg"};
const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::Level::alert {1, "alert"};
const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::Level::crit {2, "crit"};
const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::Level::err {3, "err"};
const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::Level::warning {4, "warning"};
const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::Level::notice {5, "notice"};
const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::Level::info {6, "info"};
const Enum::YLeaf Native::UtdSt::Utd::Engine::Standard::ThreatInspection::Logging::Level::debug {7, "debug"};

const Enum::YLeaf Native::Voice::Service::Type::pots {0, "pots"};
const Enum::YLeaf Native::Voice::Service::Type::saf {1, "saf"};
const Enum::YLeaf Native::Voice::Service::Type::voatm {2, "voatm"};
const Enum::YLeaf Native::Voice::Service::Type::vofr {3, "vofr"};
const Enum::YLeaf Native::Voice::Service::Type::voip {4, "voip"};

const Enum::YLeaf Native::Voice::Service::Fax::Protocol::cisco {0, "cisco"};
const Enum::YLeaf Native::Voice::Service::Fax::Protocol::none {1, "none"};
const Enum::YLeaf Native::Voice::Service::Fax::Protocol::pass_through {2, "pass-through"};
const Enum::YLeaf Native::Voice::Service::Fax::Protocol::t38 {3, "t38"};

const Enum::YLeaf Native::Voice::Service::Fax::Fallback::cisco {0, "cisco"};
const Enum::YLeaf Native::Voice::Service::Fax::Fallback::none {1, "none"};
const Enum::YLeaf Native::Voice::Service::Fax::Fallback::pass_through {2, "pass-through"};

const Enum::YLeaf Native::Voice::Service::Fax::Codec::g711alaw {0, "g711alaw"};
const Enum::YLeaf Native::Voice::Service::Fax::Codec::g711ulaw {1, "g711ulaw"};

const Enum::YLeaf Native::Voice::Service::Fax::Version::Y_0 {0, "0"};
const Enum::YLeaf Native::Voice::Service::Fax::Version::Y_3 {1, "3"};

const Enum::YLeaf Native::Vpdn::SearchOrder::dnis {0, "dnis"};
const Enum::YLeaf Native::Vpdn::SearchOrder::domain {1, "domain"};
const Enum::YLeaf Native::Vpdn::SearchOrder::multihop_hostname {2, "multihop-hostname"};


}
}

