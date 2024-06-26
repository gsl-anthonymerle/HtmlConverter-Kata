"""
This is a python translation of the original exercise from Luca Minudel
"""
import html as html_converter


class UnicodeFileToHtmlTextConverter:

    def __init__(self, full_filename_with_path):
        self.full_filename_with_path = full_filename_with_path

    def convert_to_html(self):
        f = open(self.full_filename_with_path, "r")
        html = ""
        for line in f:
            line = line.rstrip()
            html += html_converter.escape(line, quote=True)
            html += "<br />"

        return html
